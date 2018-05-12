#include <stdio.h>

float enshu(int hankei){
  float enshu = 2 * 3.14 * hankei;
  return enshu;
}

float menseki(int hankei){
  float menseki = 3.14 * hankei * hankei;
  return menseki;
}

float taiseki(int hankei){
  float taiseki = 4 * 3.14 * hankei * hankei * hankei / 3;
  return taiseki;
}

int main(void){
  int hankei;
  printf("半径を整数で入力してください:");
  scanf("%d", &hankei);
  printf("半径%dの円の円周の長さは%.2fです。\n", hankei, enshu(hankei));
  printf("半径%dの円の面積は%.2fです。\n", hankei, menseki(hankei));
  printf("半径%dの円の体積は%.2fです。\n", hankei, taiseki(hankei));
  return 0;
}
