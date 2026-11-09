# 高级语言程序设计（C++语言）实验

2026—2027 学年第一学期《高级语言程序设计(C++语言)》课程实验仓库。

| 项目 | 内容 |
| --- | --- |
| 姓名 | 徐维鑫 |
| 学号 | 2025302183225 |
| 学院 | 人工智能学院 |
| 专业 | 人工智能专业 |
| 指导老师 | 丁建立 |

仓库地址：<https://github.com/charlotte-minglai/cpp-course1>

## 实验列表

| 实验 | 主题 | 源码 | 实验报告 |
| --- | --- | --- | --- |
| 第一次 | C++ 简单程序设计 | [work1/src](work1/src) | [docx](work1/report/2025302183225_徐维鑫_第一次实验报告.docx) / [PDF](work1/report/2025302183225_徐维鑫_第一次实验报告.pdf) |
| 第二次 | 函数的使用与 IDE 调试 | [work2/src](work2/src) | [docx](work2/report/2025302183225_徐维鑫_第二次实验报告.docx) / [PDF](work2/report/2025302183225_徐维鑫_第二次实验报告.pdf) |

每个实验目录下的 `README.md` 为该次实验的设计说明（实验目的、任务分解、算法思路、运行结果与总结），`src/` 中每个题目对应一个可独立编译的 `.cpp` 源文件，`screenshots/` 为实际运行截图。

## 目录结构

```text
cpp-course1/
├── README.md
├── .gitignore
├── .vscode/                      # VSCode 构建与 gdb 调试配置
├── work1/
│   ├── README.md                 # 实验一设计说明
│   ├── src/
│   │   ├── 01_basic_types/       # 练习一：基本数据类型（9 个程序）
│   │   ├── 02_operators/         # 练习二：算术与赋值运算符（2 个程序）
│   │   ├── 03_logic_sizeof_bitwise/  # 练习三：关系/逻辑、sizeof、位运算（3 个程序）
│   │   └── 04_control_flow/      # 练习四：控制结构编程（8 个程序）
│   ├── screenshots/              # 运行结果截图
│   └── report/                   # 实验报告 docx / pdf
└── work2/
    ├── README.md                 # 实验二设计说明
    ├── src/
    │   ├── 01_function_basics/   # 练习一：函数定义、声明与调用（4 个程序）
    │   ├── 02_parameters/        # 练习二：参数传递、默认参数、重载（4 个程序）
    │   ├── 03_recursion_scope/   # 练习三：递归与变量作用域（4 个程序）
    │   └── 04_debug/             # 练习四：IDE 调试（3 个程序）
    ├── screenshots/              # 运行结果截图
    └── report/                   # 实验报告 docx / pdf
```

## 编译与运行

环境：Windows 11 + MinGW-w64 GCC 8.1.0。在任意源文件所在目录执行：

```bash
g++ -std=c++11 -Wall 源文件.cpp -o 程序名.exe
./程序名.exe
```

work1 的 22 个与 work2 的 15 个源文件均已用该命令编译通过并实际运行。

## 在 VSCode 中调试

用 VSCode 打开本仓库，安装 `C/C++` 扩展后：

- 打开某个 `.cpp` 文件，按 `F9` 在行号左侧设置断点；
- 按 `F5` 选择“g++ 调试当前文件”，会自动编译并启动 gdb；
- `F10` 逐过程、`F11` 逐语句、`Shift+F11` 跳出函数、`Shift+F5` 停止；
- 在左侧“变量 → 局部”或“监视”中查看变量值。

`launch.json` 中的 `miDebuggerPath` 默认指向 `D:/mingw64/bin/gdb.exe`，如编译器安装位置不同请自行修改。
