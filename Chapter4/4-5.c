#include <stdio.h>

int main(void){
  int a, b;
  printf("二つの整数を入力してください。\n");
  printf("整数1:");
  scanf("%d", &a);
  printf("整数2:");
  scanf("%d", &b);
  printf("それらの整数の和は%dで、積は%dです。\n", a+b, a*b);
  return 0;
}
