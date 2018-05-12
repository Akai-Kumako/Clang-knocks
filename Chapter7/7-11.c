#include <stdio.h>

int main(void){
  int test[5];
  int min = 100, index;
  printf("5人分のテストの点数を入力してください。\n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &test[i]);
    if(min > test[i])
      min = test[i];
      index = i;
  }
  printf("最低点は%d番目に入力された人で%d点です。\n", index, min);
  return 0;
}
