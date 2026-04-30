// 5． 三角形の高さと底辺の長さを入力し，三角形の面積を求めるプログラムを作りなさい．ただし．高さと底辺は実数とする．

#include <stdio.h>

double get_num(const char *str){
  double num;

  printf("%s", str);
  scanf("%lf", &num);

  return num;
}

int main(){
  double height, base, area;

  height = get_num("Enter the height: ");
  base = get_num("Enter the base: ");

  area = 0.5 * height * base;

  printf("The area of the triangle is %lf.\n", area);

  return 0;
}