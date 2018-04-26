#include <stdio.h>

int main(void){
  int tensuu;
  printf("点数を入力してください:");
  scanf("%d", &tensuu);
  if(tensuu > -1 && tensuu < 60) printf("不可です。\n");
  else if(tensuu > 59 && tensuu < 70) printf("可です。\n");
  else if(tensuu > 69 && tensuu < 80) printf("良です。\n");
  else if(tensuu > 79 && tensuu < 100) printf("優です。\n");
  else printf("評価できません。\n");
  return 0;
}
