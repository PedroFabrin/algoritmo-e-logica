#include <stdio.h>
#include <conio.h>

/*16 - Switch - Fa�a um algoritmo que leia um n�mero de 0 at� 10 e o exiba por extenso,
 caso o n�mero seja diferente do intervalo, exibir uma mensagem de erro.
Numero		Por extenso
1			Um
2			Dois
3			Tr�s
4			Quatro
...
10			Dez
Outros n�mero	Inv�lido */

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





