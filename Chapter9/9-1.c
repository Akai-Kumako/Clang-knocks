#include <stdio.h>

int main(void){
  int num;
  printf("正の整数(10進数表現)を入力してください:");
  scanf("%d", &num);
  printf("10進数の%dの8進数表現は%oです。\n", num, num);
  printf("10進数の%dの16進数表現は%xです。\n", num, num);
  return 0;
}
