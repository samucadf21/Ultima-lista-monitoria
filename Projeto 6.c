#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Escreva um algoritmo para ler 10 números. 
Todos os números lidos com valor inferior a 40 devem ser somados. 
Escreva o valor final da soma efetuada.*/

int main(void) {

float somaTotal = 0 , val = 0 , n = 0;

	setlocale (LC_ALL, "Portuguese");
	
	for(n = 0; n<3; n++) {
		
		printf("Entre com um número:");
		scanf("%f", &val);
		
		
		if(val<40){
			somaTotal = somaTotal + val;
		}
		
	}
printf("O valor total das somas é: %0.2f", somaTotal);

	return 0;
}
