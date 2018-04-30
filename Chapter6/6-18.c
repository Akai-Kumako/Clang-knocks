#include <stdio.h>

int main(void){
  int a, b, sum = 0;
  printf("２つの整数を入力してください。\n");
  scanf("%d", &a);  
  scanf("%d", &b);
  for(int i = a; i != b; a > b ? i-- : i++){
    sum = sum + i;
  }
  sum = sum + b;
  printf("%dと%dのあいだの整数の総和は%dです。\n", a, b, sum);
  return 0;
}
