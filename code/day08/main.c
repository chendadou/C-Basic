#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // 统计数字2出现的次数
  int count = 0;
  for (i = 0; i < n; i++)
  {
    if (arr[i] == 2)
      count++;
  }
  printf("count = %d\n", count);
}

/*
  3. 读取一个字符串，将字符串逆转（字符串中可能含有空格）
    若原来字符串与逆转后字符串相同，则输出 0
    若原来字符串小于逆转后字符串，则输出 -1
    若原来字符串大于逆转后字符串，则输出 1

  之前 get 无法生效的原因是：
    由于我在 main 函数里多加了一层选择序号的读取标准输入（会产生一个\n），所以需要先去除缓冲区里的\n
    还是有警告 warning: this program uses gets(), which is unsafe. 但不影响正常输入
*/
void test_c()
{
  // 去除缓冲区里的\n
  char a;
  scanf("%c", &a);

  char c[100], d[100];
  gets(c);
  int i, j;
  int len = strlen(c);

  // 字符串逆转
  for (i = len - 1, j = 0; i >= 0; i--, j++)
  {
    d[j] = c[i];
  }
  d[j] = '\0';

  int cmp = strcmp(c, d);
  if (cmp < 0)
    printf("%d\n", -1);
  else if (cmp > 0)
    printf("%d\n", 1);
  else
    printf("%d\n", 0);
}

void change(int *j)     // j = &i;
{         
  *j = 3;   // 间接访问变量 i（指针的间接访问）
}

// 4. 指针的传递
void test_d()
{
  int i = 9;    // i 是局部变量
  printf("before change: i = %d\n", i);
  change(&i);   // 传递变量 i 的地址
  printf("after change: i = %d\n", i);
}

// 5. 指针的偏移
void test_e()
{
  int a[5] = {1, 2, 3, 4, 5};
  int *p;
  p = a;      // p 指向 a 的第一个元素
  int i;

  printf("正序输出：");
  for (i = 0; i < 5; i++)
    printf("%d ", *(p + i));
  // 指针 p + 1，内存中实际上是加了一个基类型的数据类型大小，比如这边是 int，那么就是加了 4 个字节

  printf("\n----------------------\n");

  p = &a[4];  // p 指向 a 的最后一个元素
  printf("倒序输出：");
  for (i = 0; i < 5; i++)
    printf("%d ", *(p - i));

  printf("\n");
}

// 6. 指针的自增自减运算符
void test_f()
{
  int a[4] = {2, 5, 8, 6};
  int b[3] = {2, 5, 9};
  int *p, *q;
  int i, j;
  p = a;
  q = b;

  // 任何时候都是把后++去掉，然后看另一个运算符的优先级是否高于++
  // i = *p, p++
  i = *p++;

  // j = *q, (*q)++
  j = (*q)++;

  printf("a[0] = %d, i = %d, *p = %d\n", a[0], i, *p); // 2 2 5
  printf("b[0] = %d, j = %d, *q = %d\n", b[0], j, *q); // 3 2 3

  // i = p[0], p[0]++   （p[0]此时是指向a[1]这个位置）
  i = p[0]++;
  printf("a[0] = %d, i = %d, *p = %d\n", a[0], i, *p); // 2 5 6
}

void reverse(char *d)
{
  int len = strlen(d);
  for (int i = 0; i < len / 2; i++)
  {
    // char temp = d[i];
    // d[i] = d[len - 1 - i];
    // d[len - 1 - i] = temp;

    char temp = *(d + i);
    *(d + i) = *(d + len - 1 - i);
    *(d + len - 1 - i) = temp;
  }
}

// 7. 指针与一维数组（把"hello"翻转）
void test_g()
{
  char c[10] = "hello";
  reverse(c);
  printf("%s\n", c);
}

// 8. 指针与动态内存空间申请
void test_h()
{
  int i;                  // i 表示申请的空间有多大
  scanf("%d", &i);
  char *p;
  p = (char *)malloc(i);   // malloc 申请空间的单位是字节
  strcpy(p, "malloc succeed");
  puts(p);
  p++;
  free(p);                // free 释放堆空间
  p = NULL;               // 若不把 p 置为 NULL，则称其为野指针
}

// 9. 栈空间与堆空间的差异
void *print_stack()
{
  char c[20] = "print stack";
  puts(c);      // 正常打印
  return c;
}
void *print_malloc()
{
  char *p = (char *)malloc(20);
  strcpy(p, "print malloc");
  puts(p);
  return p;
}
void test_i()
{
  char *p;
  p = print_stack();    // 栈空间会随着函数执行的结束后而释放
  puts(p);              // 无法正常打印

  p = print_malloc();   // 堆空间不会随着函数执行的结束而释放，必须自己 free
  puts(p);
}

// 10. 输入一个整型数和字符串，输出一个字符串
void test_j()
{
  int i;
  scanf("%d", &i);  // 读取一个整型数
  char *str;
  str = (char *)malloc(i);
  
  // 为了去除缓冲区里的 \n
  char c;
  scanf("%c", &c);
  
  gets(str);        // 会出现 warning: this program uses gets(), which is unsafe. 但不影响正常输入
  puts(str);
}

int main()
{
  printf("1. 指针变量，直接访问和间接访问\n");
  printf("2. 输入n个数，输出数字2的出现次数（n < 100）\n");
  printf("3. 读取一个字符串，将字符串逆转（字符串中可能含有空格）\n");
  printf("4. 指针的传递\n");
  printf("5. 指针的偏移\n");
  printf("6. 指针的自增自减运算符\n");
  printf("7. 指针与一维数组（把\"hello\"翻转）\n");
  printf("8. 指针与动态内存空间申请\n");
  printf("9. 栈空间与堆空间的差异\n");
  printf("请输入序号，运行相应例子：");

  int num;
  scanf("%d", &num);

  switch (num)
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
  case 5:
    test_e();
    break;
  case 6:
    test_f();
    break;
  case 7:
    test_g();
    break;
  case 8:
    test_h();
    break;
  case 9:
    test_i();
    break;
  case 10:
    test_j();
    break;
  default:
    printf("输入不合法。\n");
    break;
  }

  return 0;
}
