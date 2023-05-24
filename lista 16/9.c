//9 - Escreva um programa onde os números lidos serão somados até que a soma
// destes números seja igual ou maior do que 100.
#include <stdio.h>
#include <conio.h>

void main(){
	int i=0, soma = 0;
	while ( soma <= 100){
		i++;
		soma = soma + i;
		printf("%d\n", soma);	
	}
	
}
