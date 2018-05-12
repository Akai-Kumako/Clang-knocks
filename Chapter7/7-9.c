#include <stdio.h>

int main(void){
  int array[6] = {0, 2, 4, 6, 8, 10};
  printf("array[1]~array[5]のデータは次の通りです。\n");
  for(int i = 1; i < 6; i++){
    printf("array[%d]: %d\n", i, array[i]);
  }
  printf("データを１つずらします。\n");
  array[0] = array[5];
  for(int i = 5; i > 0; i--){
    array[i] = array[i-1];
  }
  printf("array[1]~array[5]のデータは次の通りです。\n");
  for(int i = 1; i < 6; i++){
    printf("array[%d]: %d\n", i, array[i]);
  }
  return 0;
} 
