#include <stdio.h>

int main(void){
  char a, b, c;
  int d;

  printf("1番目に好きなアルファベットを入力して下さい:");
  scanf("%c", &a);
  printf("2番目に好きなアルファベットを入力して下さい:");
  scanf("%c", &b);
  printf("3番目に好きなアルファベットを入力して下さい:");
  scanf("%c", &c);
  printf("好きな数字を入力して下さい:");
  scanf("%d", &d);
  
  printf("あなたの好きな文字を入力順に並べると%c%c%c%dです!\n", a, b, c, d);
  return 0;
}
