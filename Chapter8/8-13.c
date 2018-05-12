#include <stdio.h>

extern int min(int, int);

int main(void){
  int x, y;
  printf("２つの整数を入力してください。\n");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("小さい方の整数は%dです。\n", min(x, y));
  return 0;
}
