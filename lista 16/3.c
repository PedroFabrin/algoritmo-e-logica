// 3 - Faça um programa que mostre os valores da tabuada do dois de 0 a 10.
#include <stdio.h>
#include <conio.h>

void main(){
	int i = 0, tab;
	while ( i <= 10 ){
		  tab = 2 * i;
		  printf("2 x %d = %d\n",i, tab);
		  i++;;
   }
}
