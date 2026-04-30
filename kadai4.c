// 4． 1クラスの人数がa人である時，野球(9人)をbチーム，バレー(6人)をcチーム作れば何人が参加できないかを計算するプログラムを作りなさい．ただし，a，b，cはキーボードから入力するものとする．  

#include <stdio.h>
#include <stdlib.h>

int get_num(const char *str){
  int num;

  printf("%s", str);
  scanf("%d", &num);

  return num;
}

int main(void){
    int a,b,c;
    a = get_num("Enter the number of students in the class: ");
    b = get_num("Enter the number of baseball teams: ");
    c = get_num("Enter the number of volleyball teams: ");

    int players = b*9 + c*6;
    if (players > a) {
        printf("All students can participate.\n");
    } else {
        printf("Number of students who cannot participate: %d\n", a - players);
    }
    return 0;
}