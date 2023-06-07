// 7 - Desenvolva um programa que apresente todos os números divisíveis por 4 na faixa de 20 a 60.
#include <stdio.h>
#include <conio.h>

void main(){
	int i = 20;
	
	while(i <= 60){
		if ( i%4 == 0){
		printf("%d\n", i);
	}
	 	   i++;	   
	}
	
	
}
