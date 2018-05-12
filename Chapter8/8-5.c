#include <stdio.h>

float menseki(float teihen, float takasa){
  float menseki = teihen * takasa / 2;
  return menseki;
}

int main(void){
  float teihen, takasa;
  printf("三角形の面積を求めます。\n");
  printf("「底辺」と「高さ」は何メートルですか？小数で入力してください\n");
  printf("底辺:");
  scanf("%f", &teihen);
  printf("高さ:");
  scanf("%f", &takasa);
  printf("面積は%f平方メートルです。\n", menseki(teihen, takasa));
  return 0;
}
