#include <stdio.h>

int main(void){
  int centi;
  printf("センチ表現をインチ表現に変換します。\n");
  printf("何センチメートルか整数で入力してください:");
  scanf("%d", &centi);
  printf("%dセンチメートルは%.4fインチです。\n", centi, centi/2.54);
  return 0;
}
