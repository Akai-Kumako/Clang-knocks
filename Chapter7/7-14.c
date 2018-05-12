#include <stdio.h>

int main(void){
  float body[3][2];
  printf("3人の身長と体重を入力してください(小数入力可)\n");
  for(int i = 0; i < 3; i++){
    printf("%d人目の身長:", i+1);
    scanf("%f", &body[i][0]);
    printf("%d人目の体重:", i+1);
    scanf("%f", &body[i][1]);
  }
  for(int i = 0; i < 3; i++){
    printf("%d人目の身長と体重は、%.2fcm %.2fkgですね。\n", i+1, body[i][0], body[i][1]);
  }
  return 0;
}
