//4.	Um cinema possui capacidade de 6 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava, sua idade
//e sua opinião em relação ao filme, sendo
//o	Nota 		Significado
//o	1 		Ótimo
//o	2 		Bom
//o	3 		Regular
//o	4 		Ruim
//	5 		Péssimo
// Elabore um algoritmo que, lendo estes dados, calcule e imprima:
//- A quantidade de respostas ótimo; FEITO
//- A diferença percentual entre respostas bom e regular;
//- A média de idade das pessoas que responderam ruim; FEITO
//- A percentagem de respostas péssimo e a maior idade que utilizou esta opção; FEITO
//- A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. FEITO
#include <stdio.h>
#include <conio.h>

void main(){
	float idade, nota, cont_otimo, idadeotimo = 0, soma = 0, contbom, contruim = 0, somaruim = 0, idaderuim = 0, contpessimo, idademaior, cont, percentpessimo, mediaruim, media, difidade, contregular, difipercent = 0, somaregular = 0;
	
	do{
		printf("Informe sua idade: ");
		scanf("%f", &idade);
		printf("De sua opiniao sobre o filme ( 1- otimo, 2- Bom, 3- Regular, 4- Ruim, 5- Pessimo ): ");
		scanf("%f", &nota);
		
		cont++;

		if ( nota == 1 ){
			cont_otimo++;
			if ( idade > idadeotimo ){
				idadeotimo = idade;
			}
		}
		
		if ( nota == 2 ){
			soma = soma + idade;
			contbom++;
		}
		
		if ( nota == 3){
			somaregular = somaregular + idade;
			contregular++;
		}

		if ( nota == 4 ){
			contruim++;
			somaruim = somaruim + idade;
			if ( idade > idaderuim ){
				idaderuim = idade;
			}
		}
		
		if ( nota == 5 ){
			contpessimo++;
			if ( idade > idademaior ){
				idademaior = idade;
			}
		}
			

	}while(cont < 6);

		printf("Quantidade de pessoas que responderam otimo: %0.2f\n", cont_otimo);

		printf("Maior idade que respondeu pessimo: %0.2f\n", idademaior);

		percentpessimo = contpessimo / cont * 100;
		printf("A percentagem de pessoas que votaram pessimo: %0.2f\n", percentpessimo);

	if ( contruim > 0){
		
		mediaruim = somaruim / contruim;
		
	}
		printf("A media de idade de pessoas que votaram ruim: %0.2f\n", mediaruim);

		media = ( soma + somaregular ) / ( contbom + contregular );
		
		printf("Media de idade das pessoas que responderam bom ou regular: %0.2f\n", media);

		difidade = idadeotimo - idaderuim;
		printf("Diferenca entre a maior idade otimo e a maior idade ruim: %0.2f\n", difidade);
		
		if ( contbom > contregular){
			difipercent = (contbom - contregular ) / cont * 100;
		}
		
		if (contregular > contbom){
			difipercent = (contregular - contbom) / cont * 100;
		}
		
		if (contregular == contbom){
			difipercent = 0;
		}
		
		printf("Diferenca percentual entre respostas boas e regulares: %0.2f", difipercent);
}
