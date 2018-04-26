#include <stdio.h>

int main(void){
  int a, b;
  printf("2つの整数を入力してください。\n");
  printf("整数A:");
  scanf("%d", &a);
  printf("整数B:");
  scanf("%d", &b);
  if(a < b) printf("整数Aの値は整数Bの値より小さいです。\n");
  else if(a > b) printf("整数Aの値は整数Bの値より大きいです。\n");
  else if(a == b) printf("整数Aの値は整数Bの値は同じです。\n");
  return 0;
}
