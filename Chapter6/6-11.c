#include <stdio.h>

int main(void){
  int num, sum = 0, i = 0;
  printf("入力された整数の総和と平均を求めます。\n");
  printf("整数を入力してください (0入力で終了)。\n");
  do{
    i++;
    scanf("%d", &num);
    sum = sum + num;
  }while(num != 0);
  printf("入力値の総和: %d\n", sum);
  printf("入力データ数: %d\n", i-1);
  printf("入力値の平均: %d\n", sum / (i-1));
  return 0;
}
