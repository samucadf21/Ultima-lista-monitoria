#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/*Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] 
(incluindo os valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo.*/

int main(){

float n, intervaloEnt=0, intervaloSai=0, val;
	
	setlocale (LC_ALL, "Portuguese");
	
	for(n=0; n<10; n++){
	printf("Entre com um Valor: ");
	scanf("%f", &val);
	
	if(val>=10 && val<=20){
		intervaloEnt++;
	}
		else{
			intervaloSai++;
	}
	}
	
	printf(" Dentro do intervalo de 10 e 20: %f", intervaloEnt);
	printf("\n");
	printf(" Fora do intervalo de 10 e 20: %f", intervaloSai);
		
  return 0;
}
