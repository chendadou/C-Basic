[🔙 返回](../README.md)

# 函数
> 一个C程序由一个主函数和若干其他函数组成。

## 1. 函数的声明、定义与调用
### 1.1 函数的声明与定义
  - 函数定义
    - func.c 文件
      ``` C
      #include "func.h"

      // test 函数定义
      void test()
      {
        printf("test\n");
      }

      // demo 函数定义
      int demo(int i)
      {
        test();
        printf("demo: %d\n", i);
        return i + 1;
      }
      ```
  - 函数声明
    - 函数声明放在头文件中；
    - func.h 文件
      ``` C
      #include <stdio.h>

      // demo 函数声明
      int demo(int i);

      // test 函数声明
      void test();
      ```
  - 函数的分类与调用
    - 函数分类
      - 用户角度
        1 | 2 
        :--- | :---
        标准函数  | 自定义函数
        库函数，系统提供，可直接使用。如 printf 函数、scanf 函数。  | 用户自己定义，用于解决需求。
      - 函数形式
        - 无参函数
          ``` C
          类型标识符 函数名()
          {
            声明部分
            语句部分
          }

          int a()
          {
            char c[10] = "hello";
            printf("%s\n", c);
          }
          ```
        - 有参函数
          ``` C
          类型标识符 函数名(形式参数表列)
          {
            声明部分
            语句部分
          }

          int b(int i, int j)   // i, j 为形参
          {
            int sum;
            sum = i + j;
            printf("sum = %d\n", sum);
          }
          ```
    - 函数调用：main.c 文件
      ``` C
      #include "func.h"

      int main(int i)
      {
        int a = 2;
        a = demo(a);    // demo 函数调用，a 为实参
        printf("a = %d\n", a);
        return 0;
      }
      ```
  - 不同函数之前传递数据，可使用以下方法：
    - 参数：通过形式参数和实际参数；
    - 返回值：使用 return 语句返回计算结果；
    - 全局变量：外部变量。
  - 关于编译和链接
    - 编译：即 func.c => func.obj，main.c => main.obj
    - 链接：即 func.obj 和 main.obj => main.exe

## 2. 递归调用
  - n! 递归调用
    ``` C
    int f(int n)
    {
      if (n == 0 || n == 1)
        return n;
      else
        return n * f(n - 1);
    }
    ```
## 3. 变量及函数的作用域
  - 局部变量
  - 全局变量