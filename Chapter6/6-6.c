#include <stdio.h>

int main(void){
  int num, i = 0;
  printf("正の整数を入力してください:");
  scanf("%d", &num);
  while(i <= num){
    printf("%d\n", i);
    i++;
  }
  return 0;
}
