#include <stdio.h>

int main(void){
  char kigo;
  puts("アットマークを入力して下さい。");
  scanf("%c", &kigo);
  printf("%cと入力しましたね。\n", kigo);
  return 0;
}
