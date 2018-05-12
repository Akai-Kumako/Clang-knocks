#include <stdio.h>

int power(int x, int y){
  int ans = 1;
  for(int i = 0; i < y; i++)
    ans = ans * x;
  return ans;
}

int main(void){
  int x, y;
  printf("２つの整数(xとy)を入力してください。\n");
  printf("x:");
  scanf("%d", &x); 
  printf("y:");
  scanf("%d", &y);
  printf("%dの%d乗は%dです。\n", x, y, power(x, y));
  return 0;
}
