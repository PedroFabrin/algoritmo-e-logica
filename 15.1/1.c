 // 3 - Faça um algoritmo que receba a altura e sexo de uma pessoa, calcule e exiba o seu peso ideal,
 // utilizando as seguintes formulas:
// a.	Homens = (72.7 * altura) – 58
// b.	Mulheres = (62.1 * altura) – 44.7
#include <stdio.h>
#include <conio.h>

	void main(){
	float h, pi;
	float s;
		printf("Informe a altura: ");
		scanf("%f", &h);
		printf("Informe o seu sexo ( 2 para homem, 1 para mulher ): ");
		scanf("%f", &s);
			if ( s == 1 ){
				pi = h * 62.1 - 44.7;
				}
				else{
					pi = (72.7 * h) - 58;
				}
			printf("O seu peso ideal eh de: %0.2f Kg", pi);
	}