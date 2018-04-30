#include <stdio.h>

int main(void){
  int num, k = 0;
  printf("直角三角形の段数を入力してください:");
  scanf("%d", &num);
  for(int i = 0; i < num; i++){
    for(int j = 0; j < i + 1; j++){
      printf("%d", k % 10);
      k++;
    }
    printf("\n");
  }
  return 0;
}
