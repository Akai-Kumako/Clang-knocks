#include <stdio.h>

int main(void){
  char name[15];
  printf("お名前は？:");
  scanf("%s", name);
  printf("はじめまして、%sさん！！\n", name);
  return 0;
}
