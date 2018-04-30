#include <stdio.h>

int main(void){
  double weight[3];
  weight[0] = 104.2;
  weight[1] = 45.8;
  weight[2] = 67.1;
  printf("登録されている3人の学生の体重は次の通りです。\n");
  for(int i = 0; i < 3; i++){
    printf("%d人目: %.1fkg\n", i + 1, weight[i]);
  }
  return 0;
}
