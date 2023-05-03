#include <stdio.h>
#include <conio.h>

/*16 - Switch - Faça um algoritmo que leia um número de 0 até 10 e o exiba por extenso,
 caso o número seja diferente do intervalo, exibir uma mensagem de erro.
Numero		Por extenso
1			Um
2			Dois
3			Três
4			Quatro
...
10			Dez
Outros número	Inválido */

void main (){
	 int n1;
	 
	 printf("Informe um numero de 1 a 10: ");
	 scanf("%d", &n1);
	 			 if ( n1 ==1 ){
	 			 	printf("Um");
				  }
				  
				   if ( n1 ==2 ){
	 			 	printf("Dois");
				  }
				  
				   if ( n1 ==3 ){
	 			 	printf("Tres");
				  }
				  
				   if ( n1 ==4 ){
	 			 	printf("Quatro");
				  }
				  
				   if ( n1 ==5 ){
	 			 	printf("Cinco");
				  }
				  
				   if ( n1 ==6 ){
	 			 	printf("Seis");
				  }
				  
				   if ( n1 ==7 ){
	 			 	printf("Sete");
				  }
				  
				   if ( n1 ==8 ){
	 			 	printf("Oito");
				  }
				  
				   if ( n1 ==9 ){
	 			 	printf("Nove");
				  }
				  
				   if ( n1 ==10 ){
	 			 	printf("Dez");
				  }
				  
				  if ( n1 < 1 || n1 > 10){
				  	printf("Invalido");
				  }

}





