// 1.	Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura
// e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino),
// e calcule e imprima:
// -a maior e a menor altura da turma;
// - a média de altura das mulheres;
// - a média de altura da turma.
// - a quantidade de homens.

#include <stdio.h>
#include <conio.h>

void main(){
	float sexo, altura, conth, contm, somma, somat, contt, altmm, altt, altmaior = 0, altmenor = 1000;

   do{
	printf("Informe o sexo ( 1- masculino, 2- feminino ): ");
	scanf("%f", &sexo);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	if ( sexo == 1 ){
	   conth++; // contagem de homens
	}
	
	if ( sexo == 2 ){
	   contm++;  // contagem de mulheres
 	   somma = somma + altura;  // soma da altura das mulheres
	}
	if ( altura > altmaior){
		altmenor = altmaior; // altura menor recebe altura maior
		altmaior = altura;   // altura maior recebe altura
	}else{
		if( altura < altmenor){
			altmenor = altura;    // altura menor recebe altura
		}
	}
	somat = somat + altura;  // soma total das alturas
	contt = conth + contm;  // contador total das alturas
   }while ( contt < 10 );

	altmm = somma / contm;  // altura media das mulheres
	altt = somat / contt;   // altura media total
	printf("Quantidade de homens: %0.0f\n", conth);
	printf("Altura media da turma: %0.2f\n", altt);
	printf("Altura media das mulheres: %0.2f\n", altmm);
	printf("A altura maior e a menor sao: %0.2f e %0.2f\n", altmaior, altmenor);

}


