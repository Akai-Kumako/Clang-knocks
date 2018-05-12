#include <stdio.h>

int main(void){
  int num1, num2;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  printf("２つの整数num1とnum2を入力してください。\n");
  printf("num1の値:");
  scanf("%d", &num1);
  printf("num2の値:");
  scanf("%d", &num2);
  printf("ポインタを利用して足し算と引き算を行います。\n");
  printf("num1 + num2 = %d\n", *ptr1 + *ptr2);
  printf("num1 - num2 = %d\n", *ptr1 - *ptr2);
  return 0;
}
