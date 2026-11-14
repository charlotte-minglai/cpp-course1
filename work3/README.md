# 作业3（实验三）　数据的共享与保护

## 一、实验目的

1. 观察程序运行中变量的作用域、生存期和可见性；
2. 学习类的静态数据成员和静态成员函数的使用；
3. 学习多文件结构在 C++ 程序中的使用；
4. 理解友元函数、友元成员函数和友元类的定义与使用；
5. 掌握“类声明放头文件、类实现放源文件、测试代码放 main 文件”的项目组织方式；
6. 养成先分析、再编码、编译开警告、运行后验证的习惯。

## 二、实验环境

| 项目 | 配置 |
| --- | --- |
| 操作系统 | Windows 11（10.0.26200） |
| 编译器 | MinGW-w64 GCC 8.1.0（g++，`-std=c++11`） |
| 编辑器 | Visual Studio Code + C/C++ 扩展（`ms-vscode.cpptools`） |
| 源码编码 | UTF-8；编译时用 `-fexec-charset=GBK` 保证中文控制台输出正常 |
| 项目组织 | 每个题目一个目录；类声明 `.h`、类实现 `.cpp`、测试 `main.cpp` 分开 |

## 三、实验任务分解

本次实验按“课堂练习（静态数据成员、静态成员函数）→ 编程练习（作用域与生存期、静态成员、友元与多文件结构）”展开，共 6 个程序。

### 3.1 课堂练习一　静态数据成员

| 文件 | 作用 |
| --- | --- |
| [Ctype.h](src/01_static_data_member/Ctype.h) | `Ctype` 类声明：普通成员 `a`、私有静态成员 `s` |
| [Ctype.cpp](src/01_static_data_member/Ctype.cpp) | 静态成员 `s` 的类外定义与初始化、构造函数、`Print` |
| [main.cpp](src/01_static_data_member/main.cpp) | 创建 `c1`、`c2`、`c3` 并依次调用 `Print` |

设计要点：

- `s` 是静态数据成员，三个对象共享同一份存储，`++s` 的效果会累加；
- `a` 是普通数据成员，每个对象各有一份，三个对象的 `a` 都从 0 开始；
- 静态数据成员必须在类外定义并初始化，定义时前面不能加 `static`；
- 课件中构造函数定义若重复写 `int x = 0`，会报“默认参数重定义”，实现文件中应去掉默认值。

运行结果：

```text
a=1
s=1
a=1
s=2
a=1
s=3
```

### 3.2 课堂练习二　静态数据成员与普通数据成员的区别

| 文件 | 作用 |
| --- | --- |
| [Student.h](src/02_static_vs_normal/Student.h) | `Student` 类声明：静态 `count`、普通 `StudentNo` |
| [Student.cpp](src/02_static_vs_normal/Student.cpp) | 构造函数中学号取当前总数，`Print` 输出 |
| [main.cpp](src/02_static_vs_normal/main.cpp) | 依次创建 4 个学生并分组打印 |

设计要点：

- `count` 记录学生总数，所有对象共享；每构造一个对象就 `++count`；
- `StudentNo` 是每个学生自己的学号，构造时取 `count` 的当前值，因此依次为 1、2、3、4；
- 打印时 `Student1` 的学号始终是 1，但 `count` 随对象增加而变为 2、3、4，直观体现“静态成员属于类、普通成员属于对象”。

运行结果：

```text
Student1 count=1
----------
Student1 count=2
Student2 count=2
----------
Student1 count=3
Student2 count=3
Student3 count=3
----------
Student1 count=4
Student2 count=4
Student3 count=4
Student4 count=4
```

### 3.3 课堂练习三　静态成员函数——找错与改正

| 文件 | 作用 |
| --- | --- |
| [错误分析.md](src/03_static_member_function/错误分析.md) | 课件原程序的错误定位与修改说明 |
| [Ctype.h](src/03_static_member_function/Ctype.h) | 改正后的类声明：`static void Print()`、`void PrintA()` |
| [Ctype.cpp](src/03_static_member_function/Ctype.cpp) | `Print` 只访问静态成员 `s`，`PrintA` 访问普通成员 `a` |
| [main.cpp](src/03_static_member_function/main.cpp) | 类名调用、对象调用、普通成员函数调用三种方式 |

主要错误：

1. `static void Print()` 的函数体里写了 `++a`。静态成员函数没有 `this` 指针，
   不能直接访问非静态数据成员 `a`，编译报错
   `invalid use of member 'Ctype::a' in static member function`；
2. `Ctype::Print()` 在任何对象创建之前调用，如果 `Print` 仍然访问 `a`，
   此时没有对象可以提供 `a`；改正后 `Print` 只访问静态成员 `s`，这一调用才合法；
3. `s` 在构造函数中 `s++`、在 `Print` 中又 `++s`，若 `s` 的本意是对象个数，
   `Print` 不应再自增——这是语义问题，不是编译错误。

改正思路：保留 `static void Print()`，让它只访问静态成员 `s`；
另加普通成员函数 `PrintA()`，通过对象访问 `a`。

运行结果：

```text
s=1
a=1
a=1
s=4
s=5
a=2
a=2
a=1
s=7
a=2
```

### 3.4 编程练习 5-3　变量的作用域、生存期与可见性

| 文件 | 作用 |
| --- | --- |
| [main.cpp](src/04_scope_lifetime/main.cpp) | 全局 `x`、`y` 与 `myFunction` 中的局部 `y` |

设计要点：

- 全局 `x = 5`、`y = 7`，作用域从定义处到文件末尾，生存期贯穿整个程序；
- `myFunction` 中的 `int y = 10` 是局部变量，遮蔽同名的全局 `y`，只在函数调用期间存在；
- `myFunction` 中没有局部 `x`，所以访问的是全局 `x`；
- 函数返回后局部 `y` 销毁，全局 `y` 仍是 7。

运行结果：

```text
x from main 5
y from main 7
x from myFunction 5
y from myFunction 10

Back from myFunction!

x from main 5
y from main 7
```

### 3.5 编程练习 5-7　Cat 类（静态数据成员与静态成员函数）

| 文件 | 作用 |
| --- | --- |
| [Cat.h](src/05_cat_class/Cat.h) | `Cat` 类声明：静态 `numOfCats`、静态 `getNumOfCats` |
| [Cat.cpp](src/05_cat_class/Cat.cpp) | 构造 `++numOfCats`、析构 `--numOfCats`、静态函数读取 |
| [main.cpp](src/05_cat_class/main.cpp) | 类名调用、对象调用、内层作用域析构测试 |

设计要点：

- `numOfCats` 是静态数据成员，所有 `Cat` 对象共享，记录当前存在的猫的数目；
- 构造函数 `++numOfCats`，析构函数 `--numOfCats`，对象销毁后计数自动减少；
- `getNumOfCats()` 是静态成员函数，没有对象时也能用 `Cat::getNumOfCats()` 调用；
- `show()` 需要访问普通成员 `name`，所以必须是普通成员函数；
- 内层作用域中的 `kitty` 离开作用域时自动调用析构函数，计数从 3 回到 2。

运行结果：

```text
程序开始时，猫的数量：0
创建 Cat：Tom，当前数量 1
创建 Cat：Jerry，当前数量 2
创建两只猫后，猫的数量：2
我是 Tom，现在共有 2 只猫
我是 Jerry，现在共有 2 只猫
创建 Cat：Kitty，当前数量 3
内层作用域中，猫的数量：3
我是 Kitty，现在共有 3 只猫
销毁 Cat：Kitty，当前数量 2
离开内层作用域后，猫的数量：2
通过对象调用静态成员函数：2
销毁 Cat：Jerry，当前数量 1
销毁 Cat：Tom，当前数量 0
```

### 3.6 编程练习 5-13　友元函数、友元成员函数与友元类

| 文件 | 作用 |
| --- | --- |
| [XYZ.h](src/06_friend_classes/XYZ.h) | `X`、`Y`、`Z` 的声明与友元声明 |
| [XYZ.cpp](src/06_friend_classes/XYZ.cpp) | `Y::g`、`Z::f`、`h`、`X::show` 的实现 |
| [main.cpp](src/06_friend_classes/main.cpp) | 依次调用三种友元，观察 `X::i` 的变化 |

设计要点：

- `X` 的私有成员 `i` 初值为 0；
- `Y::g(X*)` 是 `X` 的友元成员函数，对 `i` 加 1；
- `Z` 是 `X` 的友元类，`Z::f(X*)` 对 `i` 加 5；
- 全局函数 `h(X*)` 是 `X` 的友元函数，对 `i` 加 10；
- 友元关系是单向的、不能传递，也不会被继承；
- `friend void Y::g(X*)` 要求 `Y::g` 在 `X` 之前声明，因此先前向声明 `class X;`，
  再定义 `Y`、`Z`，最后定义 `X`；
- 按课件要求，类声明与实现放在 `XYZ.h`/`XYZ.cpp`，`main()` 放在另一个文件，
  编译时把两个 `.cpp` 一起交给 g++。

运行结果：

```text
初始值：i = 0
Y::g 加 1 后：i = 1
Z::f 加 5 后：i = 6
h 加 10 后：i = 16
```

### 3.7 思考题 5-16　编译与链接

课件末尾只列出“5-16、”而未展开题干。按教材第 5 章习题，5-16 是编译与链接的分析题，书面回答如下。

**（1）编译和链接的输入、输出文件类型与任务**

| 步骤 | 输入 | 输出 | 主要任务 |
| --- | --- | --- | --- |
| 编译 | 预处理后的源文件（`.cpp`/`.h` 展开后） | 目标文件（`.o`/`.obj`） | 词法、语法、语义检查，把源程序翻译成机器指令，生成可重定位目标文件 |
| 链接 | 一个或多个目标文件、库文件 | 可执行文件（`.exe`） | 符号解析与地址重定位，把多个目标文件和库函数拼接成完整程序 |

**（2）各种情况下是否报错、在哪个步骤报错**

1. 定义 `void f(int x, int y)`，却以 `f(1)` 调用：**编译阶段报错**，实参个数少于形参个数。
2. 声明 `void f(int x)` 但未定义，且以 `f(1)` 调用：**编译通过，链接阶段报错**，
   报 `undefined reference to 'f(int)'`。
3. 声明 `void f(int x)` 但未定义，也未调用：**编译、链接都通过**，
   因为没有生成对 `f` 的引用，链接器不需要找到它的定义。
4. `a.cpp` 和 `b.cpp` 都定义 `void f(int x)`，分别编译后链接：**各自编译通过，
   链接阶段报错**，报 `multiple definition of 'f(int)'`（重复定义，违反单一定义规则 ODR）。

## 四、编译与运行

每个题目一个目录。多文件程序要把该目录下所有 `.cpp` 一起编译：

```bash
cd work3/src/01_static_data_member
g++ -std=c++11 -Wall -Wextra -fexec-charset=GBK *.cpp -o app.exe
./app.exe
```

`04_scope_lifetime` 只有一个 `main.cpp`，同样可以用 `*.cpp` 编译。
`06_friend_classes` 的 `XYZ.cpp` 与 `main.cpp` 必须一起编译，只编译 `main.cpp`
会在链接阶段报 `undefined reference`。

## 五、目录结构

```text
work3/
├── README.md
├── src/
│   ├── 01_static_data_member/      # 课堂练习一：静态数据成员
│   │   ├── Ctype.h
│   │   ├── Ctype.cpp
│   │   └── main.cpp
│   ├── 02_static_vs_normal/        # 课堂练习二：静态成员与普通成员的区别
│   │   ├── Student.h
│   │   ├── Student.cpp
│   │   └── main.cpp
│   ├── 03_static_member_function/  # 课堂练习三：静态成员函数找错
│   │   ├── 错误分析.md
│   │   ├── Ctype.h
│   │   ├── Ctype.cpp
│   │   └── main.cpp
│   ├── 04_scope_lifetime/          # 5-3：作用域、生存期与可见性
│   │   └── main.cpp
│   ├── 05_cat_class/               # 5-7：Cat 类
│   │   ├── Cat.h
│   │   ├── Cat.cpp
│   │   └── main.cpp
│   └── 06_friend_classes/          # 5-13：友元与多文件结构
│       ├── XYZ.h
│       ├── XYZ.cpp
│       └── main.cpp
├── screenshots/                    # 运行结果截图
└── report/                         # 实验报告 docx / pdf
```
