#include <stdio.h>
#include <conio.h>
/* 18 - Switch - Faça um algoritmo que receba a idade de uma pessoa e classifique-a seguindo a tabela abaixo:
Idade	Classificação
0 a 2 anos	Recém-nascido
3 a 11 anos	Criança
12 a 19 anos	Adolescentes
20 a 55 anos	Adulto
Acima de 55 anos	Idoso */

void main(){
    int i;
		printf("Informe sua idade: ");
		scanf("%d", &i);
		
		 if ( i >= 0 && i <= 2){
		 	printf("Recem-Nascido");
 		}
 		
		 if ( i >= 3 && i <= 11){
		 	printf("Criança");
		 }
		 
		 if ( i >= 12 && i <= 19){
		 	printf("Adolescente");
		 }
		 
		 if ( i >= 20 && i <= 55){
		 	printf("Adulto");
		 }
		 
		 if ( i > 55){
		 	printf("Idoso");
		 }
}
