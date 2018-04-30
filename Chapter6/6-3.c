#include <stdio.h>

int main(void){
  int num;
  printf("正の整数を入力して下さい:");
  scanf("%d", &num);
  for(int i = 0; i < num+1; i++){
    printf("%d\n", i);
  }
  return 0;
}
