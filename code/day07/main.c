#include <stdio.h>
#define N 5

// 1. 打印数组里的每一个元素
void test_a(int arr[], int len)
{
  if(len <= 0)
    printf("empty!\n");
  else
    for(int i = 0; i < len; i++){
      printf("arr[%d] = %d\n", i, arr[i]);
    }
}

// 2. C语言中的函数调用方式是值传递！
void test_b(int b[], int len)
{
  if(len <= 0)
    printf("empty!\n");
  else{
    for(int i = 0; i < len; i++){
      printf("b[%d] = %d\n", i, b[i]);
    }
    b[len - 1] = 0;   // 修改最后一个元素
  }
}

// 3. 关于字符串的结束标志'\0'
void test_c()
{
  char a[5] = "hello";
  char b[6] = "hello";

  // %s 对应字符数组
  printf("未给字符数组预留一个字节存放\\0：%s\n", a);
  printf("有给字符数组预留一个字节存放\\0：%s\n", b);
}

// 4. scanf读取字符串，忽略空格和回车
void test_d()
{
  char str1[20];
  char str2[20];
  scanf("%s%s", str1, str2);
  printf("%s === %s\n", str1, str2);
}

// 5. 字符数组的传递
void test_e(char str[])   // str 为形参
{
  int i = 0;
  while(str[i])           // 即 str[i] != '\0' 或者 str[i] != 0
  {
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}

int main()
{
  printf("1. 打印数组里的每一个元素；\n");
  printf("2. C语言中的函数调用方式是值传递；\n");
  printf("3. 关于字符串的结束标志'\\0'；\n");
  printf("4. scanf读取字符串，忽略空格和回车；\n");
  printf("5. 字符数组的传递；\n");
  printf("请输入序号，运行相应例子：");

  int num;
  scanf("%d", &num);

  int a[N] = {1, 2, 3, 4, 5};
  int b[N] = {9, 8, 7, 6, 5};
  char c[10] = "hello";

  switch (num)
  {
    case 1:
      test_a(a, N);
      break;
    case 2:
      test_b(b, N);
      printf("after: b[%d] = %d\n", N - 1, b[N - 1]);  
      break;
    case 3:
      test_c();
      break;
    case 4:
      test_d();
      break;
    case 5:
      test_e(c);    // c 为实参
      break;
    default:
      printf("输入不合法。\n");
      break;
  }
  return 0;
}

