#include <stdio.h>

int main(void){
  int num;
  printf("7の倍数を入力してください。\n");
  scanf("%d", &num);
  if(num % 7 == 0){
    printf("正しく入力されました。\n");
  }else{
    printf("入力エラーです。\n");
  }
  return 0;
}
