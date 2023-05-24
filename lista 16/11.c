#include <stdio.h>
#include <conio.h>
// 11 - Elaborar um programa que possibilite calcular a área de cada cômodo de uma residência
// (por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada
// do nome, da largura e do comprimento de um determinado cômodo, em seguida deverá apresentar
// a área do cômodo lido e também a mensagem solicitando ao usuário a confirmação de continuar 
// calculando novos cômodos. A operação deve ser repetida até que o usuário responda "1 - NÃO".
//  Área = largura * comprimento.

void main(){
	char comodo[80];
	float larg, comp, area;
	
	do{
		printf("Informe o nome do comodo(N para cancelar): ");
		scanf("%s", comodo);
		if( comodo != "N"){
			printf("Informe a largura: ");
			scanf("%f", &larg);
			printf("Informe o comprimento: ");
			scanf("%f", &comp);
		}
		area = larg * comp;
		if ( comodo != "N"){
			printf("A area eh de: %0.2f m2", area);
		}
	}while(comodo == "N");
}
