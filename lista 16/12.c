#include <stdio.h>
#include <conio.h>
// 12 - Fa�a um programa que leia um n�mero indeterminado de idades.
// A �ltima idade lida, que n�o entrar� nos c�lculos, dever� ser igual a zero.
// Ao final programa dever� escrever quantas idades foram lidas, calcular e escrever
// a m�dia de idade desse grupo de idades.


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
	printf("A m�dia de idades eh: %0.2f", media);
}
