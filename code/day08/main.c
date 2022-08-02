#include <stdio.h>

// 1. 指针变量，直接访问和间接访问
void test_a()
{
  int i = 5;

  // p 为指针变量，可用来存储地址，类型是整型指针
  int *p;

  // 对 p 进行初始化赋值（取地址）
  p = &i;

  // 直接访问和间接访问
  printf("直接访问：i = %d\n", i);
  printf("间接访问：*p = %d\n", *p);
}

int main()
{
  printf("1. 指针变量，直接访问和间接访问\n");
  printf("请输入序号，运行相应例子：");

  int num;
  scanf("%d", &num);

  switch(num)
  {
    case 1:
      test_a();
      break;
    default:
      printf("输入不合法。\n");
      break;
  }

  return 0;
}
