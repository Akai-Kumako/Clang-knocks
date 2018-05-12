#include <stdio.h>

int sum_average(int x, int y, float *avrg){
  int sum = x + y;
  *avrg = (float)sum / 2;
  return sum;
}

int main(void){
  int num1, num2;
  float avr;
  float *avrg = &avr;
  printf("２つの整数の和と平均を求めます。２つの整数を入力してください。\n");
  printf("整数1:");
  scanf("%d", &num1);
  printf("整数2:");
  scanf("%d", &num2);
  printf("２つの整数の和は%dで、", sum_average(num1, num2, avrg));
  printf("平均は%fです。\n", *avrg);
  return 0;
}
