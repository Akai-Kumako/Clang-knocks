#include <stdio.h>

int main(void){
  int num1 = 7;
  int num2 = 3;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  printf("変数num1のアドレス: %p\n", ptr1);
  printf("変数num1のデータ: %d\n", *ptr1);
  printf("変数num2のアドレス: %p\n", ptr2);
  printf("変数num2のデータ: %d\n", *ptr2);
  return 0;
}
