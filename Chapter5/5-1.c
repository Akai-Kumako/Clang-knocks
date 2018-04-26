#include <stdio.h>

int main(void){
  char in;
  printf("aを入力してください。\n");
  scanf("%c", &in);
  if(in == 'a'){
    printf("aが入力されました。\n");
  }
  return 0;
}
