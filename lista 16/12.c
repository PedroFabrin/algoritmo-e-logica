#include <stdio.h>
#include <conio.h>
// 12 - Faça um programa que leia um número indeterminado de idades.
// A última idade lida, que não entrará nos cálculos, deverá ser igual a zero.
// Ao final programa deverá escrever quantas idades foram lidas, calcular e escrever
// a média de idade desse grupo de idades.


void main(){
	float idade, cont, media, soma=0;
	do{
		printf("Informe as idades: ");
		scanf("%f", &idade);
		if (idade != 0 ){
			cont++;
			soma = soma + idade;
			media = soma / cont;
		}
	}while( idade != 0);
	printf("A média de idades eh: %0.2f", media);
}
