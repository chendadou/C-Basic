// 主程序中不仅要包含头文件，还要包含函数文件
#include "func.h"
#include "func.c"

// 全局变量 i
int i = 10;
void print_test(int a){
  printf("print test i = %d\n", i);
}

int main()
{
  int a = 10;
  a = print_star(a);    // a = 13
  print_message();      
  print_star(a);

  printf("main i = %d\n", i);   // i = 10
  i = 5;
  print_test(i);                // i = 5

  return 0;
}
