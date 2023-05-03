#include <stdio.h>
#include <conio.h>
/*15 - Elabore um algoritmo que seja capaz de transformar graus Fahrenheit em Celsius utilizando a formula dada:
	C = ((F - 32) * 5) / 9 */

void main (){
	float f;
	float c;
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &f);
				c = ((f -32)*5)/9;
	printf("A temperatura em Celsius eh: %0.2f", c);
}
