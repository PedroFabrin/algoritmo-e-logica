#include <stdio.h>
#include <conio.h>
/* 18 - Switch - Fa�a um algoritmo que receba a idade de uma pessoa e classifique-a seguindo a tabela abaixo:
Idade	Classifica��o
0 a 2 anos	Rec�m-nascido
3 a 11 anos	Crian�a
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
		 	printf("Crian�a");
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
