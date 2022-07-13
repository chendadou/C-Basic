// 解决 scanf 编译报错问题（如有需要）
// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
  // 1. 字符型大小写转换
  char a = 'a';
  char b = 'B';
  a = a - 32;
  b = b + 32;
  printf("a 的大写字母为：%c\n", a);
  printf("B 的小写字母为：%c\n", b);

  // 2. '\0' == 0 为真
  if('\0' == 0)
    printf("It is true.\n");

  // 3. 类型强制转换
  int i = 5;
  float j = i/2;            // 由于没有强制类型转换，i/2为整型运算
  float k = (float)i/2;
  printf("j = %f\n", j);    // j = 2.000000
  printf("k = %f\n", k);    // k = 2.500000

  // 4. scanf 和 printf
  int o;
  char p;
  float q;

  scanf("%d", &o);
  printf("o = %d\n", o);    // 假设输入8，回车 -> '8\n'，读取了8，忽略了'\n'
  scanf("%c", &p);
  printf("p = %c\n", p);    // 读取了缓冲区中残留的 '\n'，而不是输入的单个字符
  scanf("%f", &q);
  printf("q = %f\n", q);

  // 5. 判断是否为闰年
  int year;
  printf("请输入年份：");
  scanf("%d", &year);
  if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("%d 年是闰年。\n", year);
  else
    printf("%d 年不是闰年。\n", year);

}
