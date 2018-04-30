#include <stdio.h>

int main(void){
  int sheep;
  printf("羊を数えます。何匹まで数えますか:");
  scanf("%d", &sheep);
  for(int i = 0; i < sheep; i++){
    printf("羊が%d匹\n", i+1);
  }
  return 0;
}
