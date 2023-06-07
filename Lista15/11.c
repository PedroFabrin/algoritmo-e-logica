#include <stdio.h>
#include <conio.h>
/*11 - Construa um algoritmo para calcular a média de dois valores inteiros positivos, previamente conhecidos.*/

void main(){
	float n1;
	float n2;
	float med;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
				med = (n1 + n2) / 2;
			printf("A media dos numeros eh: %0.2f", med);	
	
}
