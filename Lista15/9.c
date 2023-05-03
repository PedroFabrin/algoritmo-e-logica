#include <stdio.h>
#include <conio.h>
/* 9 - Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, dias,
 horas, minutos e segundo que essa pessoa já viveu.*/
 
 void main(){
 	float i;
 	float m; 
 	float d;
 	float h;
 	float min;
 	float seg;
 	
 	printf("Informe a sua idade: ");
 	scanf("%f", &i);
 				m = i * 12;
 				d = m * 30;
 				h = d * 24;
 				min = h * 60;
 				seg = min * 60;
	printf("Voce ja viveu: %0.0f anos", i);
	printf("\nVoce ja viveu: %0.0f meses", m);
	printf("\nVoce ja viveu: %0.0f dias", d);
	printf("\nVoce ja viveu: %0.0f horas", h);
	printf("\nVoce ja viveu: %0.0f minutos", min);
	printf("\nVoce ja viveu: %0.0f segundos", seg);
 }

