// 2. キーボードから3つの実数を入力し，その平均を整数で表示するプログラムを作りなさい．

#include <stdio.h>
#include <stdlib.h>

double get_average(const char *str){
  double num1,num2,num3;

  printf("%s", str);
  scanf("%lf", &num1);
  scanf("%lf", &num2);
  scanf("%lf", &num3);


  return (num1 + num2 + num3) / 3;
}



int main(void){

  double avg = get_average("Enter three numbers: ");
  printf("avg = %f\n", avg);
  int avg_int = (int)avg; // 平均を整数に変換
  printf("The average is: %d\n", avg_int);
  return 0;

}