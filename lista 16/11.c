#include <stdio.h>
#include <conio.h>
// 11 - Elaborar um programa que possibilite calcular a �rea de cada c�modo de uma resid�ncia
// (por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada
// do nome, da largura e do comprimento de um determinado c�modo, em seguida dever� apresentar
// a �rea do c�modo lido e tamb�m a mensagem solicitando ao usu�rio a confirma��o de continuar 
// calculando novos c�modos. A opera��o deve ser repetida at� que o usu�rio responda "1 - N�O".
//  �rea = largura * comprimento.

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
