#include <stdio.h>
#define CELL_NUM 8

int main(void){
  int table[CELL_NUM][CELL_NUM] =
    {{0, 0, 0, 0, 0, 0, 0 ,0},
     {0, 0, 0, 0, 0, 0, 0 ,0},
     {0, 0, 0, 0, 0, 0, 0 ,0},
     {0, 0, 0, 1, 2, 0, 0 ,0},
     {0, 0, 0, 2, 1, 0, 0 ,0},
     {0, 0, 0, 0, 0, 0, 0 ,0},
     {0, 0, 0, 0, 0, 0, 0 ,0},
     {0, 0, 0, 0, 0, 0, 0 ,0}};
  printf("オセロの盤面を表示します。\n"); 
  for(int i = 0; i < CELL_NUM; i++){
    for(int j = 0; j < CELL_NUM; j++){
      if(table[i][j] == 0)
        printf("■ ");
      else if(table[i][j] == 1)
        printf("◯ ");
      else
        printf("● ");
    }
    printf("\n");
  }
  return 0;
}
