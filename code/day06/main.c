#include <stdio.h>

// 1. if 和 else
void test_a()
{
  int i;
  while(scanf("%d", &i) != EOF){
    if(i > 0){
      printf("i is bigger than 0.\n");
    }
    else{
      printf("i is smaller than 0.\n");
    }
  }
}

// 2. 从 1 加到 100（while 循环）
void test_b()
{
  int i = 1;
  int total = 0;
  while(i <= 100){
    total = total + i;
    i++;
  }
  printf("while 循环：total = %d\n", total);
}

// 3. 从 1 加到 100（for 循环）
void test_c()
{
  int i, total;
  for(i = 1, total = 0; i <= 100; i++){
    total += i;
  }
  printf("for 循环：total = %d\n", total);
}

// 4. 从 1 到 100 之间的奇数之和（continue 和 for）
void test_d()
{
  int i, total;
  for(i = 1, total = 0; i <= 100; i++){
    if(i % 2 == 0){     // 跳过偶数，执行下一次循环，即 i++。
      continue;
    }
    total += i;
  }
  printf("total = %d\n", total);
}

// 5. 从 1 到 100 之间的奇数之和（continue 和 while）
void test_e()
{
  int i = 1;
  int total = 0;
  while(i <= 100){
    if(i % 2 == 0){
      i++;
      continue;
    } else{
      total += i;
      i++;
    }
  }
  printf("total = %d\n", total);
}

// 6. 从 1 加到 100，当 total 大于 1000 时结束循环
void test_f()
{
  int i, total;
  for(i = 1, total = 0; i <= 100; i++){
    if(total > 1000){
      break;
    }
    total += i;
  }
  printf("total = %d, i = %d\n", total, i);
}

/**
 * 7. 输入一个整形数，判断其是否为对称数；
 * 比如，12321、67876 是对称数，而 1234 不是对称数；
 * 若是对称数则输出 yes，反之输出 no。
**/
void test_g()
{
  int a, b, a_copy;
  printf("请输入整数：");
  scanf("%d", &a);
  a_copy = a;
  b = 0;
  while(a){
    b = b * 10 + a % 10; 
    a = a / 10;
  }
  if(b == a_copy)
    printf("yes.\n");
  else
    printf("no.\n");
}

int main()
{
  printf("1. if 和 else\n");
  printf("2. 从 1 加到 100（while 循环）\n");
  printf("3. 从 1 加到 100（for 循环）\n");
  printf("4. 从 1 到 100 之间的奇数之和（continue 和 for）\n");
  printf("5. 从 1 到 100 之间的奇数之和（continue 和 while）\n");
  printf("6. 从 1 加到 100，当 total 大于 1000 时结束循环\n");
  printf("7. 输入一个整形数，判断其是否为对称数；\n");
  printf("请输入序号，运行相应例子：");
  int num;
  scanf("%d", &num);
  switch(num){
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
      printf("序号不存在。");
      break;
  }
  return 0;
}
