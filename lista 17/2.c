#include <stdio.h>
#include <conio.h>

void main(){
	 int cont, cont_n, cont_c, num_conta;
	 char nome[100];
	 float saldo, saldo_total;
	 
	 do{
	 	printf("Informe o numero da conta: ");
	 	scanf("%d", &num_conta);
	 	if (num_conta != -999){
		 	printf("Informe o nome do cliente: ");
		 	scanf("%s", nome);
		 	printf("Informe o saldo: ");
		 	scanf("%f", &saldo);
		 	
		 	saldo_total = saldo_total + saldo;
		 	
		 	cont_c++;
		 	
		 	if ( saldo > 0){
		 		printf("Positivo\n");
	 		} else {
			 	printf("Negativo\n");
			 	cont_n++;
			 	}
		}
		
		else{
			cont_c == cont_c - 1;
		}
	 	
	 }while ( cont <= 10 && num_conta != -999);
	 
	 		printf("A quantidade de clientes negativos: %d\n", cont_n);
			printf("Quantidade total de agentes: %d\n", cont_c);
			printf("Saldo total: %0.2f\n", saldo_total); 
}
