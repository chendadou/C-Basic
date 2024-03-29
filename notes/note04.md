[🔙 返回](../README.md)
# 常用的数据输入、输出函数
### 1 标准输入函数
#### 1.1 scanf
  - `scanf()` 函数在读取整数型、浮点型和字符串时，会忽略`'\n'`（回车）、空格符等字符（忽略，即 `scanf` 函数执行时会先删除这些字符，然后再阻塞）；
  - `scanf()` 函数匹配一个字符时，会在缓冲区删除对应的字符；
  - 执行 `scanf("%c", &c);` 时，不会忽略任何字符，故 `scanf` 读取了还在缓冲区中残留的 `'\n'`；
  - `scanf()` 的返回值是成功赋值的变量数量；
  - `scanf()` 发生错误时返回 `EOF`，`EOF` 其实是：
    - ``` C
        #define EOF (-1) 
      ```
  - `scanf()` 函数，在混合输入多种数据类型时，每次在 `%c` 前需加入空格。
  
#### 1.2 getchar
  - 从屏幕读取一个可用的、单一的字符；
  - 可在循环内使用 `getchar()` 这个方法，就可以在屏幕上读取多个字符。

### 2 标准输出函数
#### 2.1 printf
  - printf 控制输出格式：
    - `%3d`：占用 3 个字符，且默认右对齐，`%10s` 同理；
    - `%-3d`：占用 3 个字符，且左对齐；
    - `%4.1f`：整数占 4 个字符，小数保留一位；
#### 2.2 putchar
  - 把单一字符输出到屏幕上；
  - 可在循环内使用 `putchar()` 这个方法，就可以在屏幕上输出多个字符。

``` C
  #include <stdio.h>

  int main()
  {
    int c;
    printf("请输入：");
    c = getchar();          // 输入 abc

    printf("\n你输入的内容是：");
    putchar(c);             // 输出 a
    printf("\n");

    return 0;
  }
```
