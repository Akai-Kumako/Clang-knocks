#include <stdio.h>
#include <string.h>

int main(void){
  char str[20];
  printf("文字列を入力してください。\n");
  scanf("%s", str);
  int length = strlen(str);
  printf("文字列の長さは%dです。\n", length);
  printf("文字列を逆順に出力すると");
  for(int i = length; i > 0; i--)
    printf("%c", str[i - 1]);
  printf("です。\n");
  return 0;
}
