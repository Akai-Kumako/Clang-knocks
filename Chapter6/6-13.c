#include <stdio.h>

int main(void){
  int a, b, c;
  printf("長方形を作ります!\n");
  printf("縦の長さを入力してください:");
  scanf("%d", &a);
  printf("横の長さを入力してください:");
  scanf("%d", &b);
  printf("長方形の個数を入力してください:");
  scanf("%d", &c);
  for(int i = 0; i < a; i++){
    for(int k = 0; k < c; k++){
      for(int j = 0; j < b; j++){
        printf("*");
      }
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
