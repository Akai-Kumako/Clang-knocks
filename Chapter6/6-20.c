#include <stdio.h>

int main(void){
  int i, sum = 0;
  printf("1~10までの偶数の総和:");
  for(i = 1; i <= 10; ++i){
    if(i % 2 != 0)
      continue;
    else
      sum = sum + i;
  }
  printf("%d\n", sum);
  return 0;
}
