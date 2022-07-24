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
    total += i;
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

int main()
{
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
    default:
      printf("...");
      break;
  }
  return 0;
}
