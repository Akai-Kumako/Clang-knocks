#include <stdio.h>

int main(void){
  int age;
  printf("あなたの年齢を入力してください。\n");
  scanf("%d", &age);
  if(age < 0){
    printf("あなたはきっと生まれていません。\n");
  }else if(age < 20){
    printf("あなたは未成年です。\n");
  }else{
    printf("あなたは成年です。\n");
  }
  return 0;
}
