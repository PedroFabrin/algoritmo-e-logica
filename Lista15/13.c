#include <stdio.h>
#include <conio.h>
/*13 - Faça um algoritmo que ao receber um número qualquer, seja capaz de verificar se o mesmo é ou não negativo.*/

void main (){
	float n1;
	printf("Informe um numero: ");
	scanf("%f", &n1);
				if (n1 > 0){
					printf("O numero eh positivo");
				}
				
				if ( n1 < 0){
					printf("O numero eh negativo");
				}
				
				if ( n1 == 0){
					printf("O numero eh nulo");
				}
}
