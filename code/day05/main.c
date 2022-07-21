#include <stdio.h>

// 1. 数字逆序输出
void test_a()
{
  int a;
  printf("请输入整数：");
  scanf("%d", &a);
  while(a != 0){
    printf("%d", a % 10);
    a = a / 10;
  }
  printf("\n");
} 

// 2. 数字逆序输出（数字变字符）
void test_b()
{
  int b;
  printf("请输入整数：");
  scanf("%d", &b);
  while(b != 0){
    printf("%c", (b % 10) + 48);    // 数字变字符，参考 ASCII 码表
    b = b / 10;
  }
  printf("\n");
}

// 3. 判断两个浮点数是否相等
void test_c()
{
  float c, d;
  scanf("%f%f", &c, &d);
  if(c - d > -0.0001 && c - d < 0.0001)
    printf("两个值相等。\n");
  else
    printf("两个值不想等。\n");

  // 错误示范：if(c == d)
}

// 4. 逻辑非
void test_d()
{
  int i = 5;
  int j = 6;
  printf("若 i = 5，则 !i -> %d\n", !i);
  printf("若 j = 6，则 !!j -> %d\n", !!j);
}

// 5. 

int main()
{
  printf("1. 数字逆序输出；\n");
  printf("2. 数字逆序输出（数字变字符）；\n");
  printf("3. 判断两个浮点数是否相等；\n");
  printf("4. 逻辑非；\n");
  printf("请输入序号，运行相应例子：");

  int num;
  scanf("%d", &num);

  switch(num)
  {
    case 1:
      test_a();
      break;
    case 2:
      test_b();
      break;
    case 3:
      test_c();
      break;
    case 4:
      test_d();
      break;
    default:
      printf("输入不合法。\n");
      break;
  }
  
  return 0;
}