// 2 - Fa�a um programa como uma estrutura de repeti��o come�ando de 1 e vai at� o n�mero informado pelo usu�rio
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
