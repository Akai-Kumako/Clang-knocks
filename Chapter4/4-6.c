#include <stdio.h>

int main(void){
  int a;
  printf("10より大きい整数を入力してください。\n");
  scanf("%d", &a);
  printf("10を加えると%dです。\n", a+10);
  printf("10を減じると%dです。\n", a-10);
  printf("10を乗じると%dです。\n", a*10);
  printf("10で除した商は%dです。\n", a/10);
  printf("10で除した余り%dです。\n", a%10);
  return 0;
}
