#include <stdio.h>

int main(void){
  int x;
  printf("変数xの値（整数）を入力してください:");
  scanf("%d", &x);
  printf("変数xの値をデクリメントしました。現在のxの値は%dです。\n", --x);
  printf("変数xの値をインクリメントしました。現在のxの値は%dです。\n", ++x);
  return 0;
}
