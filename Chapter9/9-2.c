#include <stdio.h>

int main(void){
  int num;
  printf("正の整数(16進数表現)を入力してください:");
  scanf("%x", &num);
  printf("16進数の%xの8進数表現は%oです。\n", num, num);
  printf("16進数の%xの10進数表現は%dです。\n", num, num);
  return 0;
}
