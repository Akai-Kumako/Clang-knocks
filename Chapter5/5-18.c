#include <stdio.h>

int main(void){
  int year;
  printf("うるう年かどうか判定します。年を西暦で入力してください:");
  scanf("%d", &year);
  if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
    printf("うるう年です。\n");
  }else{
    printf("うるう年ではありません。\n");
  }
  return 0;
}
