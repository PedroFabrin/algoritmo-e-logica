#include <stdio.h>
#include <conio.h>
 /* 6 - Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro
 do segundo e divida o resultado pelo terceiro.*/
 
 void main(){
 	float n1;
 	float n2;
 	float n3;
 	float divi;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	printf("Informe outro numero: ");
	scanf("%f", &n3);
				divi = ( n2 - n1 ) / n3;
	printf("O resultado da conta e: %0.2f", divi);
 }
