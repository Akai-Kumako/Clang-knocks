#include <stdio.h>

int main(void){
  int num;
  printf("整数を入力してください:");
  scanf("%d", &num);
  printf("入力された値の絶対値は%dです。\n", num < 0 ? -num : num); 
  return 0;
} 
