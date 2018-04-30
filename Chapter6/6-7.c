#include <stdio.h>

int main(void){
  int num;
  printf("負の整数を入力してください。\n");
  scanf("%d", &num);
  do{
    printf("%d ", num);
    num++;
  }while(num < 1);
  printf("\n");
  return 0;
}
