# 数据类型、scanf 和 printf

## 一、 数据类型的分类
### 1. 基本类型
  - 整型 `int`
  - 字符型 `char`
  - 实型（浮点型）
    - 单精度 `float`
    - 双精度 `double`
### 2. 构造类型
  - 数组类型 `[ ]`
  - 结构类型 `struct`
  - 联合类型 `union`
  - 枚举类型 `enum`
### 3. 指针类型 `*`
### 4. 空类型（无值型） `void`

## 二、常量和变量
### 1. 定义
根据在程序运行过程中，其值发生变化与否：
  - 其值发生变化的量：变量
  - 其值不发生变化的量：常量
### 2. 变量的命名规则：
  - 只能由字母、数字和下划线组成；
  - 第一个字符必须为字母或者下划线；
  - 变量名不能与关键字同名。
  - 注意：
    - 先定义，后使用；
    - 大写字母和小写字母是不同的字符。
### 3. 关键字
  -|-|-|-|-|-|-|-
  :---:  | :---: | :---:   | :---:  | :---:    | :---:    | :---:    | :---:
  auto   | break | case    | char   | const    | continue | default  | do
  double | else  | enum    | extern | float    | for      | goto     | if
  int    | long  | register| return | short    | signed   | sizeof   | static
  struct | switch| typedef | union  | unsigned | void     | volatile | while

## 三、scanf 和 printf
### 1. scanf
  - C 语言通过 `scanf` 函数读取键盘输入（标准输入）。
  - ``` C
      int a;
      scanf("%d", &a); 
    ```

### 2. printf
  -  `printf` 函数是将运行结果输出到屏幕上。
  - ``` C
      int a = 7;
      int b = 3;
      printf("hello world!\n");
      printf("%d %d\n", a, b); 
    ```
  - 输出控制符
    - `%d`：以十进制、有符号的形式输出 `int` 类型的整数；
    - `%f`：以十进制、有符号的形式输入 `float` 类型的小数；
    - `%lf`：以十进制、有符号的形式输入 `double` 类型的小数；
    - `%c`：输出单一字符；
    - `%s`：输出一个字符串。
    - TODO：先列举几个简单的，常用的，之后再补全所有。
