#include <stdio.h>
#include <conio.h>
void main(){
	float n1, n2, media=0, resp;
	int qtd_aprov=0;
	do{
	
		printf("Informe a 1. nota: ");
		scanf("%f", &n1);
		printf("Informe a 2. nota: ");
		scanf("%f", &n2);
		
		media = (n1 + n2)/2;
		
		printf("Media: %0.2f\n", media);
		
		if(media >= 7){
			qtd_aprov++;
		}
		
		printf("Deseja Continuar? (1-Sim ; 2-Nao)");
		scanf("%f", &resp);
		
	}while (resp == 1 );
	
		   printf("A quantidade de alunos aprovados foi de: %d", qtd_aprov);
}
