#include <stdio.h>

int main(void){
  int num;
  printf("正の整数を入力してください。\n");
  scanf("%d", &num);
  printf("1~%dまでの間の奇数は次の通りです。\n", num);
  for(int i = 0; i < num / 2; i++){
    printf("%d\n", 2 * i + 1);
  }
  return 0;
}
