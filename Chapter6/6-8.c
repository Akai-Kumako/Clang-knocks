#include <stdio.h>

int main(void){
  int a, b;
  printf("2つの整数を(小さい順に)入力してください。\n");
  scanf("%d", &a);
  scanf("%d", &b);
  for(int i = a; i < b + 1; i++){
    printf("%d ", i);
  }
  printf("\n");
}
