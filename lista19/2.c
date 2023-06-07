#include <stdio.h>
#include <conio.h>

// 2.	Escreva um algoritmo que:
// - leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno
// de um determinado curso;
// - determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno
// que obteve cada uma delas;
// - Suponha que não exista dois ou mais alunos com a mesma nota.

void main(){
	float matricula, nota, cont, notamaior, notamenor, m_maior, m_menor;
		do{
			printf("Informe o numero de matricula: ");
			scanf("%f", &matricula);
			printf("Informe a sua nota: ");
			scanf("%f", &nota);
			cont++;
			
			if (nota > notamaior){
				notamenor = notamaior;
				notamaior = nota;
				m_menor = m_maior; // matricula com maior nota
				m_maior = matricula;
			}
		else
			if ( nota > notamenor){
				notamenor = nota;
				m_menor = matricula; // matricula com menor nota
			}
			
			
			
		}while(cont < 7);
		
		printf("Aluno com segunda maior nota: %0.0f com a nota %0.2f\n", m_menor, notamenor);
		printf("Aluno com maior nota: %0.0f com a nota %0.2f\n", m_maior, notamaior);
}
