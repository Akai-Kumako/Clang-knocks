#include <stdio.h>

int main(void){
  int number = 10;
  printf("変数numberの値は%dです。\n", number);
  number = number + 1;
  printf("変数numberに1を加えました。変数numberの値は%dです。\n", number);
  number = number + 5;
  printf("変数numberに5を加えました。変数numberの値は%dです。\n", number);
  number = number - 1;
  printf("変数numberから1を引きました。変数numberの値は%dです。\n", number);
  return 0;
}
