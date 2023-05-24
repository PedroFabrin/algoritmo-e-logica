// 6 - Criar um Calculador de Tabuadas. O usuário deverá digitar o número desejado e o programa deverá fazer
// a tabuada desse número de zero a 10.
#include <stdio.h>
#include <conio.h>

void main(){
	int i = 0, tab, num = 0;
	printf("Informe um numero que deseja saber a tabuada: ");
	scanf("%d", &num);
	while ( i <= 10 ){
		  tab = i * num;
		  printf("%d x %d = %d\n",num, i, tab);
		  i++;
   }
}
