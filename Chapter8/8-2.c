#include <stdio.h>

void check_even_odd(int num){
  if(num % 2 == 0)
    printf("%dは偶数です。\n", num);
  else
    printf("%dは奇数です。\n", num);
}

int main(void){
  int num;
  printf("整数を入力してください:");
  scanf("%d", &num);
  check_even_odd(num);
  return 0;
}
