#include <stdio.h>
#include <conio.h>
/*17 - Switch - Faça um algoritmo que receba o preço e o código de origem de um produto e exiba a procedência
 de acordo com a tabela abaixo:
Código de Origem	Procedência
1			Sul
2			Norte
3			Leste
4			Oeste
5 ou 6			Nordeste
7, 8 ou 9		Sudeste
10 até 20		Centro-Oeste
21 até 30		Noroeste
Outros código		Inválido */

void main (){
	float p, n1;
	printf("Informe o preço do produto: ");
	scanf("%f", &p);
	printf("Informe o codigo origem do produto: ");
	scanf("%f", &n1);
				if ( n1 == 1){
					printf("Sul");
				}
				
				if ( n1 == 2){
					printf("Norte");
				}
				
				if ( n1 == 3){
					printf("Leste");
				}
				
				if ( n1 == 4){
					printf("Oeste");
				}
				
				if ( n1 == 5 || n1 == 6){			
				   printf("Nordeste");
				}
				
				if ( n1 == 7 || n1 == 8 || n1 == 9){
					printf("Sudeste");
				}
				
				if ( n1 >= 10 && n1 <= 20){
					printf("Centro-Oeste");
				}
				
				if ( n1 >= 21 && n1 <= 30){
					printf("Noroeste");
				}
				
				if ( n1 < 1 || n1 > 30){
					printf("Invalido");
				}
}
