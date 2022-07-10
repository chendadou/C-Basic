// 解决 scanf 编译报错问题（如有需要）
// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define A 3     // 常量 A

int main()
{
  int a = 5;    // 变量 a
  printf("A: %d\n", A);
  printf("a: %d\n", a);

  int num1, num2;
  scanf("%d%d", &num1, &num2);    // 变量前要加 & 符号
  printf("num1 = %d, num2 = %d\n", num1, num2);
  printf("result: %d\n", num1 + num2);

  return 0;
}
