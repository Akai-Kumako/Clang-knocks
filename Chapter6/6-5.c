#include <stdio.h>

int main(void){
  int num, ans = 1;
  printf("階乗を求めます。\n");
  printf("正の整数を入力して下さい:");
  scanf("%d", &num);
  for(int i = 1; i < num+1; i++){
    ans = ans * i;
  }
  printf("%d!=%d\n", num, ans);
  return 0;
}
