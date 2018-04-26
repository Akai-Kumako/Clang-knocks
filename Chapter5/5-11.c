#include <stdio.h>

int main(void){
  int num;
  printf("1-3の整数を入力してください。\n");
  scanf("%d", &num);
  if(num == 1) printf("1番は英語でfirstです。\n");
  else if(num == 2) printf("2番は英語でsecondです。\n");
  else if(num == 3) printf("3番は英語でthirdです。\n");
  else printf("1-3の整数を入力してください。\n");
  return 0;
}
