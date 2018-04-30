#include <stdio.h>

int main(void){
  int num;
  printf("直角三角形の段数を入力してください:");
  scanf("%d", &num);
  for(int i = 0; i < num; i++){
    for(int j = 0; j < i+1; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
