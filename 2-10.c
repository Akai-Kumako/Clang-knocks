#include <stdio.h>

int main(void){
  printf("%s文中の文字列では、\"は\\\"と記述します。\n", "printf");
  printf("現在、消費税率は%fで、%d円のものは税込%d円となります。\n", 0.08, 100, 108);
  printf("今から%c回警告音を鳴らします。\a\n", '1');
  return 0;
}
