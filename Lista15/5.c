#include <stdio.h>
#include <conio.h>
/* 5 - Escreva um algoritmo que leia 4 números, após a leitura multiplique todos e exibir o resultado */

void main(){
	float n1;
	float n2;
	float n3;
	float n4;
	float mult;
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	printf("Informe outro numero: ");
	scanf("%f", &n3);
	printf("Informe outro numero: ");
	scanf("%f", &n4);
				mult = n1 * n2 * n3 * n4;
	printf("O resultado da conta e: %0.2f", mult);
}
