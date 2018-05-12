#include <stdio.h>

int main(void){
  int test[15] = {9, 10, 9, 8, 5, 2, 8, 10, 6, 10, 10, 5, 8, 7, 9};
  int target, exist = 0;
  printf("何点の人を探しますか？\n");
  scanf("%d", &target);
  for(int i = 0; i < 15; i++){
    if(test[i] == target)
      exist = 1;
  }
  if(exist == 1)
    printf("%d点の人は存在します。\n", target);
  else
    printf("%d点の人は存在しません。\n", target);
  return 0;
}
