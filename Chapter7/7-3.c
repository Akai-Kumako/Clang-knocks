#include <stdio.h>

int main(void){
  double eyesight[5];
  for(int i = 0; i < 5; i++){
    printf("%d人目:", i + 1);
    scanf("%lf", &eyesight[i]);
  }
  printf("入力された5人の学生の視力は\n");
  for(int i = 0; i < 5; i++){
    printf("%.1f\n", eyesight[i]);
  }
  printf("です。");
  return 0;
}
