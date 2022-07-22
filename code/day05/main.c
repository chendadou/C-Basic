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

// 5. 自增自减运算符
void test_e()
{
  int i = -1;
  int j;
  j = i++ > -1;   // (1) j = i > -1; (2) i = i + 1
  printf("i = %d, i++ > -1 -> %d\n", i, j);

  int k;
  k = ++i > -1;   // (1) i = i + 1; (2) k = i > -1
  printf("i = %d, ++i > -1 -> %d\n", i, k);
}

// 6. 练习题
void test_f()
{
  printf("请输入65到122之间的整数：");
  int x;
  scanf("%d", &x);
  if(x < 65 && x > 122)
    printf("输入不合法");
  else
    printf("%c\n", x);

  /**
    * 在 Windows 系统中，如果一开始 x 的数据类型是 char，会报错；
    * 报错提示：Run-Time Check Failure #2 - Stack around the variable 'x' was corrupted.
    * 报错原因：当前操作的空间已超过变量本身占用的空间大小。
    * 在我这边执行的话，只会提示，不影响运行。但还是要记录下。
  **/
}

// 7. 求字节数运算符 sizeof
void test_g()
{
  int a;
  float b;
  char c;
  printf("整形数 a 的字节数为：%lu\n", sizeof(a));
  printf("浮点数 b 的字节数为：%lu\n", sizeof(b));
  printf("字符 c 的字节数为：%lu\n", sizeof(c));
}

int main()
{
  printf("1. 数字逆序输出；\n");
  printf("2. 数字逆序输出（数字变字符）；\n");
  printf("3. 判断两个浮点数是否相等；\n");
  printf("4. 逻辑非；\n");
  printf("5. 自增自减运算符；\n");
  printf("6. 读取一个65到122之间的整形数，然后以字符形式输出它，比如读取了97，输出字符a。\n");
  printf("7. 求字节数运算符 sizeof\n");
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
    case 5:
      test_e();
      break;
    case 6:
      test_f();
      break;
    case 7:
      test_g();
      break;
    default:
      printf("输入不合法。\n");
      break;
  }
  
  return 0;
}