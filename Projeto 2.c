#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/* Faça um algoritmo que calcule e escreva a 
média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive).*/


int main() {

float val1 = 0 ,val2 = 0, media = 0;

	setlocale (LC_ALL, "Portuguese");
	
	printf("Entre com um número entre 15 e 100:");
	scanf("%f" ,&val1);
	printf("Entre com outro número entre 15 e 100:");
	scanf("%f" ,&val2);
	media = (val1 + val2) /2;
	printf("A média dos dois números é: %3f" ,media);

	
	return 0;
}
