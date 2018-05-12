#include <stdio.h>

int main(void){
  int test[4];
  float avr, dis;
  printf("4人分のテストの点数を入力してください。\n");
  for(int i = 0; i < 4; i++){
    scanf("%d", &test[i]);
    avr = avr + test[i];
  }
  avr = (float)avr / 4;
  for(int i = 0; i < 4; i++){
    dis = dis + (test[i] - avr) * (test[i] - avr);
  }
  dis = dis / 4;
  printf("4人のテストの点の平均は%.2f、分散は%.2fです。\n", avr, dis);
  return 0;
}
