#include <stdio.h>

int main(void){
  int alert;
  printf("警報音を鳴らします。何回鳴らしますか?\n");
  scanf("%d", &alert);
  for(int i = 0; i < alert; i++){
    printf("\a");
  }
  return 0;
}
