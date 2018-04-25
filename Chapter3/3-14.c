#include <stdio.h>

int main(void){
  double right, left;

  printf("右目の視力と左目の視力を順に入力してください。\n");
  scanf("%lf", &right);
  scanf("%lf", &left);

  printf("あなたの右目の視力は%.2fですね。\n", right);
  printf("あなたの左目の視力は%.2fですね。\n", left);
}
