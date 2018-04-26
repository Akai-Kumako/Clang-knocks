#include <stdio.h>

int main(void){
  int tensuu;
  int goukei = 0;
  for(int i = 1; i < 6; i++){
    printf("%d科目のテストの点数を入力してください:", i);
    scanf("%d", &tensuu);
    goukei = goukei + tensuu;
  }
  printf("5科目のテストの点数の合計は%d点で、平均は%.1f点です。\n", goukei, goukei/5.0);
  return 0;
}
