#include <stdio.h>
#include <conio.h>
/*13 - Fa�a um algoritmo que ao receber um n�mero qualquer, seja capaz de verificar se o mesmo � ou n�o negativo.*/

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
