#include <stdio.h>
#include <conio.h>
/*10 - Elabore um algoritmo que informe o maior número entre dois números conhecido pelo usuário.*/

void main(){
	float n1;
	float n2;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
			if ( n1 > n2 ){
				printf("O maior numero eh o: %0.1f", n1);
			}	
			
			else (n2 > n1);{
				printf("O maior numero eh o: %0.1f", n2);
			}
}
