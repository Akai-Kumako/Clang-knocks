#include <stdio.h>

int main(void){
  double d_num = 3.14;
  double *ptr = &d_num;
  printf("d_numのアドレスは%pです\n", ptr);
  printf("d_numに格納されている値は%fです\n", *ptr);
  return 0;
}
