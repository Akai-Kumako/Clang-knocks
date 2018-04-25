#include <stdio.h>

int main(void){
  double right, left;

  printf("右目の視力を入力してください:");
  scanf("%lf", &right);
  printf("左目の視力を入力してください:");
  scanf("%lf", &left);

  printf("あなたの右目の視力は%.2fですね。\n", right);
  printf("あなたの左目の視力は%.2fですね。\n", left);
}
