//9 - Escreva um programa onde os n�meros lidos ser�o somados at� que a soma
// destes n�meros seja igual ou maior do que 100.
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
