// 解决 scanf 编译报错问题（如有需要）
// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1. 字符型大小写转换
void testA()
{
  char a = 'a';
  char b = 'B';
  a = a - 32;
  b = b + 32;
  printf("a 的大写字母为：%c\n", a);
  printf("B 的小写字母为：%c\n", b);
}

// 2. '\0' == 0 为真
void testB()
{
  if('\0' == 0)
    printf("It is true.\n");
}

// 3. 类型强制转换
void testC()
{
  int i = 5;
  float j = i/2;            // 由于没有强制类型转换，i/2为整型运算
  float k = (float)i/2;
  printf("无 float 强制转换：j = %f\n", j);    // j = 2.000000
  printf("有 float 强制转换：k = %f\n", k);    // k = 2.500000
}

// 4. scanf 和 printf
void testD()
{
  int o;
  char p;
  float q;

  printf("请输入整数o：");
  scanf("%d", &o);
  printf("o = %d\n", o);    // 假设输入8，回车 -> '8\n'，读取了8，忽略了'\n'
  printf("请输入单个字符p：");
  scanf("%c", &p);
  printf("p = %c\n", p);    // 读取了缓冲区中残留的 '\n'，而不是输入的单个字符
  printf("请输入小数q：");
  scanf("%f", &q);
  printf("q = %f\n", q);
}

// 5. 判断是否为闰年
void testE()
{
  int year;
  printf("请输入年份：");
  scanf("%d", &year);
  if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("%d 年是闰年。\n", year);
  else
    printf("%d 年不是闰年。\n", year);
}

// 6. scanf 循环读取整数
void scanfA()
{
  int count;
  printf("请输入整数count：");
  while(scanf("%d", &count) != EOF){
    printf("count = %d\n", count);

    // Mac 结束循环输入：ctrl + d
  }
}

// 7. scanf 循环读取字符：小写字母转大写字母
void scanfB()
{
  char str;
  printf("请输入字符str：");
  while(scanf("%c", &str) != EOF){
    if(str != '\n'){
      printf("%c", str - 32);
    } else{
      printf("\n");
    }

    // Mac 结束循环输入：ctrl + d
  }
}

// 8. 一个 scanf 读多种数据类型
void scanfC()
{
  int i;
  char m;
  float n;

  // 混合输入时，每次在%c前需加一个空格
  scanf("%d %c%f", &i, &m, &n);
  printf("i = %d, m = %c, n = %f\n", i, m, n);
}

// 9. printf 控制输出格式
void printfTest()
{
  printf("name = %s, age = %d, score = %f, sex = %c\n", "test", 3, 95.5, 'f');
  printf("name = %s, age = %4d, score = %4.1f, sex = %c\n", "test", 3, 95.5, 'f');
  printf("name = %10s, age = %-4d, score = %5.2f, sex = %c\n", "test", 3, 95.5, 'f');
}

int main()
{
  printf("1: 字符型大小写转换\n");
  printf("2: '\\0' == 0 为真\n");
  printf("3: 类型强制转换\n");
  printf("4: scanf 和 printf\n");
  printf("5: 判断是否为闰年\n");
  printf("6: scanf 循环读取整数\n");
  printf("7: scanf 循环读取字符：小写字母转大写字母\n");
  printf("8: 一个 scanf 读多种数据类型\n");
  printf("9: printf 控制输出格式\n");
  printf("请输入对应序号，运行对应例子：");

  int num;
  scanf("%d", &num);

  switch(num){
    case 1:
      testA();
      break;
    case 2:
      testB();
      break;
    case 3:
      testC();
      break;
    case 4:
      testD();
      break;
    case 5:
      testE();
      break;
    case 6:
      scanfA();
      break;
    case 7:
      scanfB();
      break;
    case 8:
      scanfC();
      break;
    case 9:
      printfTest();
      break;
    default:
      printf("输入的序号不存在。\n");
      break;
  }
  
  return 0;
}
