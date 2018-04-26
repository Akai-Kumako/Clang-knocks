#include <stdio.h>

int main(void){
  int chocolate = 100, eat;
  printf("チョコレートが%d個あります。（食べるチャンスは2回です)i\n", chocolate);
  printf("1回目。何個食べますか:");
  scanf("%d", &eat);
  chocolate = chocolate - eat;
  printf("チョコレートは残り%d個です。\n", chocolate);
  printf("2回目。何個食べますか:");
  scanf("%d", &eat);
  chocolate = chocolate - eat;
  printf("チョコレートは残り%d個です。\n", chocolate);
  return 0;
}
