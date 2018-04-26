#include <stdio.h>

int main(void){
  int a, b, c;
  printf("3つの整数を入力してください。\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  printf("最小値は%dです。\n", a > b ? (b > c ? c : b) : (a > c ? c : a));
  return 0;
}
