#include <stdio.h>

int main(void){
  double height;
  printf("あなたの標準体重をお教えします!\n");
  printf("あなたの身長(cm)を入力してください(小数入力可):");
  scanf("%lf", &height);
  printf("あなたの標準体重は%.2fです。\n", (height-100)*0.9);
  return 0;
}
