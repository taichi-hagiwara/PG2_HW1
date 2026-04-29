// 1． キーボードから3つの実数を入力し，その平均を実数で表示するプログラムを作りなさい．

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
  printf("The average is: %lf\n", avg);
  return 0;

}