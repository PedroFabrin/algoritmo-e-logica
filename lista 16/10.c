#include <stdio.h>
#include <conio.h>
//10 - Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas
// em um concurso de beleza. Para cada leitura dever� ser realizado uma pergunta para
// o usu�rio para parar ou continuar (1 -continuar, 2 - parar). Ao final o programa dever� exibir:
// a altura da mo�a mais alta e o n�mero de mo�as no concurso. Considere que todas as mo�as possuem
// altura diferente.

void main(){
	
	char nome[100];
	float altura, alta;
	int resp = 1, qtd;
	
	while (resp == 1){
		printf("Informe o Nome: ");
		scanf("%s", nome);
		printf("Informe a Altura: ");
		scanf("%f", &altura);
		
		qtd++;
		
		if(altura > alta){
			alta = altura;
		}
		
		printf("Deseja Continuar? (1-Sim ; 2-Nao) ");
		scanf("%d", &resp);
	}
	
	printf("Quantidade de participantes: %d\n", qtd);
	printf("Maior altura: %0.2f", alta);
	
}
