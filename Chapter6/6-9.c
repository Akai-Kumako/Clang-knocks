#include <stdio.h>

int main(void){
  int a, b;
  printf("2つの整数を(大きい順に)入力してください。\n");
  scanf("%d", &b);
  scanf("%d", &a);
  for(int i = b; i > a - 1; i--){
    printf("%d ", i);
  }
  printf("\n");
}
