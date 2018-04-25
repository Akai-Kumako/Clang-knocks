#include <stdio.h>

int main(void){
  char a[5], b[5], c[5];
  int d;

  printf("1番目に好きなアルファベットを入力してください:");
  scanf("%s", a);
  printf("2番目に好きなアルファベットを入力してください:");
  scanf("%s", b);
  printf("3番目に好きなアルファベットを入力してください:");
  scanf("%s", c);
  printf("好きな数字を入力してください:");
  scanf("%d", &d);

  printf("あなたの好きな文字を入力順に並べると%s%s%s%dです!\n", a, b, c, d);
  return 0;
}
