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

}
