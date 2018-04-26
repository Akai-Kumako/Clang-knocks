#include <stdio.h>

int main(void){
  int a, b;
  printf("整数1と整数2に対する割合を求めます。\n");
  printf("整数1と整数2を入力してください。\n");
  printf("整数1:");
  scanf("%d", &a);
  printf("整数2:");
  scanf("%d", &b);
  printf("整数1は整数2の%.1f%%です。\n", ((double)a/(double)b)*100);
  return 0;
}
