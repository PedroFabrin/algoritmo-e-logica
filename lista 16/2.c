// 2 - Faça um programa como uma estrutura de repetição começando de 1 e vai até o número informado pelo usuário
#include <stdio.h>
#include <conio.h>

void main(){
	int num;
	int i = 1;
	printf("Informe um valor: ");
	scanf("%d", &num);
	while ( i <= num){
		  printf("%d\n", i);
		  i++;
	}
}
