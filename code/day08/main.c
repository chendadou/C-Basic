#include <stdio.h>
#include <string.h>

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

/*
  2. 输入n个数，输出数字2的出现次数（n < 100）
    输入格式为两行：
    第一行输入元素个数，比如 5；
    第二行输入具体值，空格隔开，比如2 2 3 2 1，那么输出结果为3，因为2出现了3次。
*/
void test_b()
{
  // 需输入n个元素
  int n;
  scanf("%d", &n);

  // 往数组里读入数据
  int arr[100];
  int i;
  for(i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // 统计数字2出现的次数
  int count = 0;
  for(i = 0; i < n; i++)
  {
    if(arr[i] == 2)
      count++;
  }
  printf("count = %d\n", count);
}

/*
  3. 读取一个字符串，将字符串逆转（字符串中可能含有空格）
    若原来字符串与逆转后字符串相同，则输出 0
    若原来字符串小于逆转后字符串，则输出 -1
    若原来字符串大于逆转后字符串，则输出 1
  
  TODO: 这边 gets 和 fgets 还无法生效，应该是 launch.json 的配置问题，后续需解决。
*/
void test_c()
{
  char c[100], d[100];
  gets(c);
  int i, j;
  int len = strlen(c);
  
  // 字符串逆转
  for(i = len - 1, j = 0; i >= 0; i--, j++)
  {
    d[j] = c[i];
  }
  d[j] = '\0';

  int cmp = strcmp(c, d);
  if(cmp < 0)
    printf("%d\n", -1);
  else if(cmp > 0)
    printf("%d\n", 1);
  else
    printf("%d\n", 0);

}

int main()
{
  printf("1. 指针变量，直接访问和间接访问\n");
  printf("2. 输入n个数，输出数字2的出现次数（n < 100）\n");
  printf("3. 读取一个字符串，将字符串逆转（字符串中可能含有空格）\n");
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
    default:
      printf("输入不合法。\n");
      break;
  }

  return 0;
}
