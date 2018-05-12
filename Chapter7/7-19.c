#include <stdio.h>
#include <string.h>

int main(void){
  char str[20];
  printf("文字列を入力してください。\n");
  scanf("%s", str);
  printf("文字列中のsをkに置き換えると次のようになります\n");
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == 's')
      printf("k");
    else
      printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}
