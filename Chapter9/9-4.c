#include <stdio.h>

int main(void){
  int num;
  char moji;
  printf("int型変数numとchar型変数mojiを使用できます。\n");
  printf("numのメモリ上の記憶場所(アドレスは)%pです\n", &num);
  printf("mojiのメモリ上の記憶場所(アドレスは)%pです\n", &moji);
  return 0;
}
