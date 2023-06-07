#include <stdio.h>
#include <conio.h>
/* 7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual,
 ao final exiba a idade que essa pessoa tem. */
 
 void main(){
 	float a1;
 	float a2;
 	float i;
 	
 	printf("Informe o ano atual: ");
 	scanf("%f", &a1);
 	printf("Informe o ano em que voce nasceu: ");
 	scanf("%f", &a2);
 				i = a1 - a2;
		printf("Sua idade eh de: %0.0f anos", i);
 }
