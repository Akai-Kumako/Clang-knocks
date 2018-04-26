#include <stdio.h>

int main(void){
  double radius;
  printf("円の円周と面積を求めます。\n");
  printf("円の半径(cm)を入力してください(小数入力可)。\n");
  scanf("%lf", &radius);
  printf("その円の円周の長さは%.1fcmです。\n", 2*3.14*radius);
  printf("その円の面積は%.1f平方cm。\n", 3.14*radius*radius);
  return 0;
}
