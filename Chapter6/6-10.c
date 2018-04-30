#include <stdio.h>

int main(void){
  int num, sum = 0;
  printf("入力された整数を全て足し合わせます。\n");
  printf("整数を入力してください (0入力で終了)。\n");
  do{
    scanf("%d", &num);
    sum = sum + num;
  }while(num != 0);
  printf("入力値の総和: %d\n", sum);
}
