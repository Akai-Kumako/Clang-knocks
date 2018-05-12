#include <stdio.h>

int main(void){
  int num[7];
  for(int i = 0; i < 7; i++){
    num[i] = 6 - i;
  }
  for(int i = 0; i < 7; i++){
    printf("num[%d]の値は%d\n", i, num[i]);
  }
  return 0;
}
