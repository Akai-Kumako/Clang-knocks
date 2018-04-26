#include <stdio.h>

int main(void){
  int month;
  printf("月の値を入力してください:");
  scanf("%d", &month);
  if(month > 0 && month < 13) printf("月データとして適切です。\n");
  else printf("月データとして不適切です。\n");
  return 0;
}
