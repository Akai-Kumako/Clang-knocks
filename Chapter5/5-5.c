#include <stdio.h>

int main(void){
  int num;
  printf("整数を入力してください。:");
  scanf("%d", &num);
  if(num < 0){
    printf("負の数が入力されました。\n");
  }else{
    printf("正の数が入力されました。\n");
  }
  return 0;
}
