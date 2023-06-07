#include <stdio.h>
#include <conio.h>
/* 12 - São informados dois valores numéricos correspondentes as notas de um determinado aluno.
 Deseja-se um algoritmo que permita responder "aprovado" se o aluno obtiver média aritmética simples
  igual ou superior a 7,0 caso contrário "Reprovado". Mostre também a média de aprovação do aluno.*/
  
  void main(){
  	float n1, n2, med;
  	printf("Informe a primeira nota: ");
  	scanf("%f", &n1);
  	printf("Informe a segunda nota: ");
  	scanf("%f", &n2);
  				med = (n1+n2) / 2;
			if ( med >= 7) {
				printf("%0.2f APROVADO", med);
			}
			
			if ( med < 7) {
				 printf("%0.2f REPROVADO", med);
			}
  }
