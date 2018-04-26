#include <stdio.h>

int main(void){
  int a, b;
  printf("２つの整数を入力してください。\n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("大きい方の数値は%dです。\n", a > b ? a : b);
  return 0;
}
