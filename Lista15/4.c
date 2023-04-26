#include <stdio.h>
#include <conio.h>
/*4 - Escreva um algoritmo que leia 2 números, após a leitura somar e exibir o resultado.*/

void main(){

	float num1;
	float num2;
	float soma;
	
	printf("Informe um numero: ");
	scanf("%f", &num1);
	printf("Informe outro numero: ");
	scanf("%f", &num2);
	soma = num1 + num2;
	printf("A soma dos números eh igual a:%0.2f", soma);
}
