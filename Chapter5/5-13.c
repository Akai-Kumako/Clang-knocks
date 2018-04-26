#include <stdio.h>

int main(void){
  char omikuji;
  printf("おみくじです。a~hの数字を入力してください:");
  scanf("%c", &omikuji);
  if(omikuji == 'a' || omikuji == 'g') printf("吉です。\n");
  else if(omikuji == 'b' || omikuji == 'h') printf("中吉です。\n");
  else if(omikuji == 'd' || omikuji == 'e' || omikuji == 'f') printf("大吉です。\n");
  else if(omikuji == 'c') printf("凶です。\n");
  else printf("大凶です\n");
  return 0;
}
