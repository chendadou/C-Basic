#include "func.h"

// print_star 函数定义，也就是函数实现
int print_star(int i)   // i 为形参
{
  printf("********************\n");
  printf("print star: %d\n", i);
  return i + 3;
}

// print_message 函数定义
void print_message()
{
  printf("printf message\n");
  print_star(3);        // 可调用 print_start 函数
}