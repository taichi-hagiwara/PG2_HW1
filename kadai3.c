// 3． りんご1個100円，オレンジ1個88円，苺1パック398円で販売されている．各購入数を入力し，合計金額を表示するプログラムを作りなさい．ただし，これらの価格は税込み価格とする．

#include <stdio.h>
#include <stdlib.h>

int get_num(const char *str){
  int num;

  printf("%s", str);
  scanf("%d", &num);

  return num;
}

int main(void){
  int apple, orange, strawberry;
  int total;

  apple = get_num("Enter the number of apples: ");
  orange = get_num("Enter the number of oranges: ");
  strawberry = get_num("Enter the number of strawberry packs: ");

  total = apple * 100 + orange * 88 + strawberry * 398;

  printf("Total amount: %d yen\n", total);

  return 0;
}