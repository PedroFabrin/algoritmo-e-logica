// 3.	O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
// •	Durante o semestre são dadas três notas;
// •	A nota final é obtida pela média aritmética das notas dadas durante o curso;
// •	É considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um mínimo de 40 aulas.
// Fazer um algoritmo que:

// a)	Leia um conjunto de dados contendo o número de matrícula, as três notas e a frequência de 10 alunos;

// b)	Calcule e exiba:
// •	A nota final de cada aluno;
// •	A maior e menor nota da turma;
// •	A nota média da turma;
// •	O total de alunos reprovados;
// •	A porcentagem de alunos reprovados por faltas.

#include <stdio.h>
#include <conio.h>

	void main(){
		float matricula, n1 = 0, n2 = 0, n3 = 0, aula, media, cont_alunos = 0, mediat, cont_r = 0, notamaior = 0, notamenor = 999, cont_f, pfalta, mediatotal;
		do{
			printf("Informe o seu numero de matricula: ");
			scanf("%f", &matricula);
			printf("Informe a sua primeira nota: ");
			scanf("%f", &n1);
			printf("Informe a sua segunda nota: ");
			scanf("%f", &n2);
			printf("Informe a sua terceira nota: ");
			scanf("%f", &n3);
			printf("Informe a quantidade de aulas assistidas: ");
			scanf("%f", &aula);
			
				media = ( n1 + n2 + n3 ) / 3;  // calcular media da nota

					printf("Nota final: %0.2f\n", media);

				mediat = mediat + media; // media total da sala
			
			if ( media < 6 || aula < 40 ){
				cont_r++;   // contador de reprova
			}
			
			if ( aula < 40 ){
				cont_f++;  // contador de falta
			}
			

			if ( n1 > notamaior){ 
				notamaior = n1;   // a maior nota é a nota 1
			}
			
			if ( n2 > notamaior ){
				notamaior = n2;   // maior nota é a nota 2
			}
			
			if ( n3 > notamaior){
				notamaior = n3;   // maior nota é a nota 3
			}
	
			if ( n1 < notamenor){
				notamenor = n1;   // menor nota é a nota 1
			}
			
			if ( n2 < notamenor ){
				notamenor = n2;   // menor nota é a nota 2
			}
			
			if ( n3 < notamenor ){
				notamenor = n3;   // menor nota é a nota 3
			}
		
			
			
			cont_alunos++;  // contador de alunos 
				
		}while(cont_alunos < 3);
		
		mediatotal = mediat / cont_alunos;
		pfalta = cont_f / cont_r * 100;
		
		printf("Maior nota da turma: %0.2f\n", notamaior);
		printf("Menor nota da turma: %0.2f\n", notamenor);
		printf("Media da turma: %0.2f\n", mediatotal);
		printf("Qtd alunos reprovados: %0.0f\n", cont_r);
 		printf("A porcentagem de alunos reprovados que foram reprovados por faltas: %0.2f %%", pfalta);
}