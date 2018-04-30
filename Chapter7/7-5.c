#include <stdio.h>

int main(void){
  char univ[6] = "otemae";
  printf("配列univに格納されている値は次の通りです。\n");
  for(int i = 0; i < 6; i++)
    printf("univ[%d]:%c\n", i, univ[i]);
  return 0;
}
