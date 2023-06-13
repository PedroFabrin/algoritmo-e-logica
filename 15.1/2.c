// 2.    Escreva um algoritmo que:
// leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
// determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
// Suponha que não exista dois ou mais alunos com a mesma nota.

#include <stdio.h>
#include <conio.h>

void main(){

	float matricula, nota, notamaior , segundanota, matriculamaior, segundamatricula, cont;	
	
	do{
		printf("Informe a sua matricula: ");
		scanf("%f", &matricula);
		printf("Informe a sua nota: ");
		scanf("%f", &nota);
		
		
		if (nota > notamaior){
			segundanota = notamaior;
			notamaior = nota;
			matriculamaior = matricula;
		}
		
			if (nota > segundanota && nota < notamaior){
				segundanota = nota;
				segundamatricula = matricula;
			}
			
			cont++;
			
			
	}while(cont < 7);
	
	printf("A maior nota foi: %0.2f\n", notamaior);
	printf("O Aluno que teve a maior nota foi o: %0.0f\n", matriculamaior);
	printf("A segunda maior nota foi: %0.2f\n", segundanota);
	printf("O Aluno que teve a segunda maior nota foi o: %0.0f\n", segundamatricula);
}