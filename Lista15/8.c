#include <stdio.h>
#include <conio.h>
/* 8 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. */

void main(){
	float n1;
	float n2;
	float n3;
	float med;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
				med = (n1 + n2 + n3) / 3;
 			printf("A media do aluno eh de: %0.2f", med);
}

