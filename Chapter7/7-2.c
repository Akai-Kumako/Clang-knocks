#include <stdio.h>

int main(void){
  int uriage[5];
  uriage[1] = 59;
  uriage[2] = 7;
  uriage[3] = 82;
  uriage[4] = 253;
  printf("1月~4月の売り上げは次の通りです。\n");
  for(int i = 1; i < 5; i++){
    printf("%d月: %d\n", i, uriage[i]);
  }
  return 0;
}
