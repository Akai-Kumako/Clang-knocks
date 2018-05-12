#include <stdio.h>

int check_month(int month){
  if(month < 13 && month > 0)
    return month;
  else
    return -1;
}

int main(void){
  int month;
  printf("何月生まれですか？:");
  scanf("%d", &month);
  if(check_month(month) == -1)
    printf("入力エラーです。\n");
  else
    printf("%d月生まれですね。\n", month);
  return 0;
}
