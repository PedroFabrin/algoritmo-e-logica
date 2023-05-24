// 8 - Elaborar um programa que apresente o resultado da soma dos valores pares
// situados na faixa numérica de 50 a 80.
#include <stdio.h>
#include <conio.h>
void main(){
	int i = 50, soma = 0;
	
	while(i <= 80){
		if ( i%2 == 0){
		
		   soma = soma + i;
	}
	 	   i++;	   
	}
	
	printf("%d", soma);
}
