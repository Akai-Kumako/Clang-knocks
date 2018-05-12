#include <stdio.h>

void sphere(int radius, float *area, float *volume){
  *area = 4 * 3.14 * radius * radius;
  *volume = 4 * 3.14 * radius * radius * radius / 3;
}

int main(void){
  int radius;
  float are;
  float volu;
  float *area = &are;
  float *volume = &volu;
  printf("球の表面積と体積を求めます。球の半径を整数で入力してください:");
  scanf("%d", &radius);
  sphere(radius, area, volume);
  printf("半径%dの球の表面積は%.3fです。\n", radius, *area);
  printf("半径%dの球の体積は%.3fです。\n", radius, *volume);
  return 0;
}
