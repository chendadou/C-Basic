#include <stdio.h>

int main()
{
  // 1. 整型数据
  int i = 123;      // 十进制
  int j = 0x7b;     // 十六进制（0x开头）
  int k = 0173;     // 八进制（0开头）

  // %d：以十进制的方式输出整数
  printf("输出整数：i = %d\n", i);
  printf("输出整数：j = %d\n", j);
  printf("输出整数：k = %d\n", k);

  // ---------------------------------------

  // 2. 浮点型数据
  float a = 1.23;

  // e 代表10的幂次，e之前必须有数字，且e之后的指数必须为整数
  float b = 5e-2;

  // %f：以浮点形式输出对应数据
  printf("输出浮点数：a = %f\n", a);
  printf("输出浮点数：b = %f\n", b);


  // 3. 字符型数据
  char c = 'c';

  // %c：以字符形式输出对应数据
  printf("输出字符：c = %c\n", c);
  printf("%c 的ASCII值为：%d\n", c, c);
  printf("输出ASCII码值为99的字符： %c\n", 99);

}
