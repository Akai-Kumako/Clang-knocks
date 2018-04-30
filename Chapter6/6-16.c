#include <stdio.h>

int main(void){
  int num;
  printf("整数を入力してください:");
  scanf("%d", &num);
  for(int i = num; i != 0; i > 0 ? i-- : i++){
    printf("%d\n", i);
  }
  printf("0\n");
  return 0;
}
