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
| 第一次 | C++ 简单程序设计 | [lab01/src](lab01/src) | [docx](lab01/report/2025302183225_徐维鑫_第一次实验报告.docx) / [PDF](lab01/report/2025302183225_徐维鑫_第一次实验报告.pdf) |

每个实验目录下的 `README.md` 为该次实验的设计说明（实验目的、任务分解、算法思路、运行结果与总结），`src/` 中每个题目对应一个可独立编译的 `.cpp` 源文件，`screenshots/` 为实际运行截图。

## 目录结构

```text
cpp-course1/
├── README.md
├── .gitignore
└── lab01/
    ├── README.md                 # 实验一设计说明
    ├── src/
    │   ├── 01_basic_types/       # 练习一：基本数据类型（9 个程序）
    │   ├── 02_operators/         # 练习二：算术与赋值运算符（2 个程序）
    │   ├── 03_logic_sizeof_bitwise/  # 练习三：关系/逻辑、sizeof、位运算（3 个程序）
    │   └── 04_control_flow/      # 练习四：控制结构编程（8 个程序）
    ├── screenshots/              # 运行结果截图
    └── report/                   # 实验报告 docx / pdf
```

## 编译与运行

环境：Windows 11 + MinGW-w64 GCC 8.1.0。在任意源文件所在目录执行：

```bash
g++ -std=c++11 -Wall 源文件.cpp -o 程序名.exe
./程序名.exe
```

全部 22 个源文件均已用该命令编译通过并实际运行。
