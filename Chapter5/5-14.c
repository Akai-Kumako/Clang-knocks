#include <stdio.h>

int main(void){
  int x, y;
  char calc;
  printf("２つ整数の演算(x 演算子 y)を行います。\n");
  printf("２つ整数を入力してください。\n");
  printf("整数x:"); scanf("%d", &x);
  printf("整数y:"); scanf("%d", &y);
  printf("行う演算をa~cで入力してください。(a: 足し算, b: 引き算, c: 掛け算):");
  scanf("%*c%c", &calc);
  if(calc == 'a') printf("%d+%d=%dです。\n", x, y, x+y);
  else if(calc == 'b') printf("%d-%d=%dです。\n", x, y, x-y);
  else if(calc == 'c') printf("%d*%d=%dです。\n", x, y, x*y);
  return 0;
}
