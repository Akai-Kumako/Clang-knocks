#include <stdio.h>

int main(void){
  double d_num;
  printf("double変数d_numを使用できます。\n");
  printf("d_numのメモリ上の記憶場所(アドレスは)%pです\n", &d_num);
  return 0;
}
