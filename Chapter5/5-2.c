#include <stdio.h>

int main(void){
  int seisuu;
  printf("整数を入力してください:");
  scanf("%d", &seisuu);
  if(seisuu%5 == 0){
    printf("5の倍数が入力されました。\n");
  }
  printf("入力ありがとうございました。\n");
  return 0;
} 
