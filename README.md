# 高级语言程序设计（C++语言）作业仓库

2026—2027 学年第一学期《高级语言程序设计(C++语言)》课程实验作业。

## 作业入口

| 作业 | 文件夹 | 主题 | 源码 | 实验报告 |
| --- | --- | --- | --- | --- |
| 作业1（第一次） | [work1/](work1) | C++ 简单程序设计 | [work1/src](work1/src) | [docx](work1/report/2025302183225_徐维鑫_第一次实验报告.docx) / [PDF](work1/report/2025302183225_徐维鑫_第一次实验报告.pdf) |
| 作业2（第二次） | [work2/](work2) | 函数的使用与 IDE 调试 | [work2/src](work2/src) | [docx](work2/report/2025302183225_徐维鑫_第二次实验报告.docx) / [PDF](work2/report/2025302183225_徐维鑫_第二次实验报告.pdf) |
| 作业3（第三次） | [work3/](work3) | 数据的共享与保护 | [work3/src](work3/src) | [docx](work3/report/2025302183225_徐维鑫_第三次实验报告.docx) / [PDF](work3/report/2025302183225_徐维鑫_第三次实验报告.pdf) |

根目录的 `README.md` 是本说明；`.vscode/` 是 VSCode 编译与调试配置（作业2 的 IDE 调试使用）；`.gitignore` 是 Git 忽略规则，防止提交 `.exe` 等临时文件。它们都不是作业内容，三次作业分别在 `work1/`、`work2/` 和 `work3/`。

| 项目 | 内容 |
| --- | --- |
| 姓名 | 徐维鑫 |
| 学号 | 2025302183225 |
| 学院 | 人工智能学院 |
| 专业 | 人工智能专业 |
| 指导老师 | 丁建立 |

仓库地址：<https://github.com/charlotte-minglai/cpp-course1>

每个作业目录下的 `README.md` 为该次实验的设计说明（实验目的、任务分解、算法思路、运行结果与总结），`screenshots/` 为实际运行截图。work1、work2 的每个题目对应一个可独立编译的 `.cpp` 源文件；work3 按课件要求使用多文件结构，每个题目一个目录，类声明 `.h`、类实现 `.cpp`、测试 `main.cpp` 分开。

## 目录结构

```text
cpp-course1/
├── README.md
├── .gitignore
├── .vscode/                      # VSCode 构建与 gdb 调试配置
├── work1/
│   ├── README.md                 # 作业1设计说明
│   ├── src/
│   │   ├── 01_basic_types/       # 练习一：基本数据类型（9 个程序）
│   │   ├── 02_operators/         # 练习二：算术与赋值运算符（2 个程序）
│   │   ├── 03_logic_sizeof_bitwise/  # 练习三：关系/逻辑、sizeof、位运算（3 个程序）
│   │   └── 04_control_flow/      # 练习四：控制结构编程（8 个程序）
│   ├── screenshots/              # 运行结果截图
│   └── report/                   # 实验报告 docx / pdf
├── work2/
│   ├── README.md                 # 作业2设计说明
│   ├── src/
│   │   ├── 01_function_basics/   # 练习一：函数定义、声明与调用（4 个程序）
│   │   ├── 02_parameters/        # 练习二：参数传递、默认参数、重载（4 个程序）
│   │   ├── 03_recursion_scope/   # 练习三：递归与变量作用域（4 个程序）
│   │   └── 04_debug/             # 练习四：IDE 调试（3 个程序）
│   ├── screenshots/              # 运行结果截图
│   └── report/                   # 实验报告 docx / pdf
└── work3/
    ├── README.md                 # 作业3设计说明
    ├── src/
    │   ├── 01_static_data_member/      # 课堂练习一：静态数据成员
    │   ├── 02_static_vs_normal/        # 课堂练习二：静态成员与普通成员
    │   ├── 03_static_member_function/  # 课堂练习三：静态成员函数找错
    │   ├── 04_scope_lifetime/          # 5-3：作用域、生存期与可见性
    │   ├── 05_cat_class/               # 5-7：Cat 类
    │   └── 06_friend_classes/          # 5-13：友元与多文件结构
    ├── screenshots/              # 运行结果截图
    └── report/                   # 实验报告 docx / pdf
```

## 编译与运行

环境：Windows 11 + MinGW-w64 GCC 8.1.0。在任意源文件所在目录执行：

```bash
g++ -std=c++11 -Wall 源文件.cpp -o 程序名.exe
./程序名.exe
```

work1 的 22 个与 work2 的 15 个程序均已用该命令编译通过并实际运行。

work3 使用多文件结构，需要把同一题目目录下的所有 `.cpp` 一起编译：

```bash
cd work3/src/01_static_data_member
g++ -std=c++11 -Wall -Wextra -fexec-charset=GBK *.cpp -o app.exe
./app.exe
```

`-fexec-charset=GBK` 用于让中文在 Windows 控制台中正常显示；`06_friend_classes` 必须把 `XYZ.cpp` 与 `main.cpp` 一起编译。

## 在 VSCode 中调试

用 VSCode 打开本仓库，安装 `C/C++` 扩展后：

- 打开某个 `.cpp` 文件，按 `F9` 在行号左侧设置断点；
- 按 `F5` 选择“g++ 调试当前文件”，会自动编译并启动 gdb；
- `F10` 逐过程、`F11` 逐语句、`Shift+F11` 跳出函数、`Shift+F5` 停止；
- 在左侧“变量 → 局部”或“监视”中查看变量值。

`launch.json` 中的 `miDebuggerPath` 默认指向 `D:/mingw64/bin/gdb.exe`，如编译器安装位置不同请自行修改。

注意：`F5` 默认只编译当前 `.cpp` 文件，work3 的多文件程序如果只编译 `main.cpp` 会在链接阶段报 `undefined reference`；调试前请先在命令行用 `g++ *.cpp` 生成可执行文件，或把 `tasks.json` 的编译参数改成该目录下的所有 `.cpp`。
