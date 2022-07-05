
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/*Criar um programa que leia um número inteiro entre 1 e 12 e escrever o mês correspondente. 
Caso o usuário digite um número fora desse intervalo, 
deverá aparecer uma mensagem informando que não existe mês referente a este número 
e deverá ser solicitado ao usuário que realize uma nova tentativa.*/


int main(void){

int numMes;

	setlocale (LC_ALL, "Portuguese");
	
	printf("Mês do Ano:");
	printf("\n");
	printf("Entre com um número entre 1 e 12: ");
	scanf("%d" ,&numMes);
	printf("\n");
	
	switch (numMes)
	{
		case 1:
			printf("Mês 1 - Janeiro\n");
		break;
		case 2:
			printf("Mês 2 - Fevereiro\n");
		break;
		case 3:
			printf("Mês 3 - Março\n");
		break;
		case 4:
			printf("Mês 4 - Abril\n");
		break;
		case 5:
			printf("Mês 5 - Maio\n");
		break;
		case 6:
			printf("Mês 6 - Junho\n");
		break;
		case 7:
			printf("Mês 7 Julho\n");
		break;
		case 8:
			printf("Mês 8 - Agosto\n");
		break;
		case 9:
			printf("Mês 9 - Setembro\n");
		break;
		case 10:
			printf("Mês 10 - Outubro\n");
		break;
		case 11:
			printf("Mês 11 - Novembro\n");
		break;
		case 12:
			printf("Mês 12 Dezembro\n");
		break;
		
		default:
			printf ("O número não se refere a nenhum mês do ano !!! \n");			
	}
	
	return 0;
}
