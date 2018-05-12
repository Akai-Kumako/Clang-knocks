#include <stdio.h>

int main(void){
  int test[15] = {9, 10, 9, 8, 5, 2, 8, 10, 6, 10, 10, 5, 8, 7, 9};
  int target, num = 0;
  printf("何点の人の人数を知りたいですか:");
  scanf("%d", &target);
  for(int i = 0; i < 15; i++){
    if(test[i] == target)
      num++;
  }
  printf("%d点の人は%d人です。\n", target, num);
  return 0;
}
