#include <stdio.h>
#define INDEX 7

int main(void){
  int num[INDEX];
  for(int i = 0; i < INDEX; i++){
    num[i] = i;
  }
  for(int i = 0; i < INDEX; i++){
    printf("num[%d]の値は%d\n", i, num[i]);
  }
  return 0;
}
