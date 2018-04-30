#include <stdio.h>

int main(void){
  int fibo[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
  printf("フィボナッチ数列(最初の10個)は次の通りです。\n");
  for(int i = 0; i < 10; i++){
    printf("%d ", fibo[i]);
  }
  printf("\n");
  return 0;
}
