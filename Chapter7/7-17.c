#include <stdio.h>

int main(void){
  char FIname[15], FAname[15]; 
  printf("First nameは？:");
  scanf("%s", FIname);
  printf("Family nameは？:");
  scanf("%s", FAname);
  printf("%s %sさんですね。\n", FAname, FIname);
  return 0;
}
