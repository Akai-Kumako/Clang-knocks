#include <stdio.h>

int main(void){
  int month;
  printf("先生、1-12月の英語を覚えました。");
  printf("何月でも聞いてください!\n");
  scanf("%d", &month);
  switch(month){
    case 1: printf("Januaryです!\n"); break;
    case 2: printf("Februaryです!\n"); break;
    case 3: printf("Marchです!\n"); break;
    case 4: printf("Aprilです!\n"); break;
    case 5:
    case 6:
    case 7:
    case 8: printf("先生、忘れました!\n"); break;
    case 9:
    case 10:
    case 11:
    case 12: printf("先生、覚えていませんでした!\n"); break;
    default: printf("先生、存在しません!\n"); break;
  }
  return 0;
}
