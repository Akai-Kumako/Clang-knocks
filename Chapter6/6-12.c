#include <stdio.h>

int main(void){
  int a, b;
  printf("長方形を作ります!\n");
  printf("縦の長さを入力してください:");
  scanf("%d", &a);
  printf("横の長さを入力してください:");
  scanf("%d", &b);
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
