#include <stdio.h>

int main(void){
  int num1 = 7;
  int num2 = 3;
  int num3 = 10;
  int *int_ptr = &num1;
  printf("num1の値:%d\n", *int_ptr);
  int_ptr = &num2;
  printf("num2の値:%d\n", *int_ptr);
  int_ptr = &num3;
  printf("num3の値:%d\n", *int_ptr);
  return 0;
}
