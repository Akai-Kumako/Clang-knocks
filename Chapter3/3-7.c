#include <stdio.h>

int main(void){
  int num1 = 100, num2 = 200, num3 = 300, num4 = 400;
  int temp = 0;  
  
  printf("変数num1の値:%d\n", num1);
  printf("変数num2の値:%d\n", num2);
  printf("変数num3の値:%d\n", num3);
  printf("変数num4の値:%d\n", num4);
  
  printf("変数の値を一つずつ（循環的に）ずらします。\n");
  printf("ずらした後の変数の値は次の通りです。\n");
  
  temp = num1;
  num1 = num2;
  num2 = num3;
  num3 = num4;
  num4 = temp;
  
  printf("変数num1の値:%d\n", num1);
  printf("変数num2の値:%d\n", num2);
  printf("変数num3の値:%d\n", num3);
  printf("変数num4の値:%d\n", num4);
  return 0;
}
