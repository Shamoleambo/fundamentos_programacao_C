#include <stdio.h>
#include <math.h>

/* Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor da série a seguir:
 * 	s = -x²/1! + x³/2! - x⁴/3! + x⁵/4! - x⁶/3! + x⁷/2! - x⁸/1! + x⁹/2! - x¹⁰/3! + x¹¹/4! -...  */

int main() {
	int num_term;
	double valor, soma = 0;

	printf("Forneça o número de termos: ");
	scanf("%d%*c", &num_term);
	printf("Forneça um número positivo: ");
	scanf("%lf%*c", &valor);

	int fatorial = 1;
	int valor_fatorial = 1;
	char ordem_fatorial = 'A';
	for(int i = 1; i <= num_term; i++){
		if((i+1)%2 == 0) {
			soma += -(pow(valor, i + 1)/valor_fatorial);
		} else if((i+1)%2 != 0){
			soma += (pow(valor, i + 1)/ valor_fatorial);
		}
		
		if(ordem_fatorial == 'A') {
			if(fatorial == 4) {
				ordem_fatorial = 'D';
				fatorial -= 1;
			} else {
				fatorial += 1;
			}
		} else {
			if(fatorial == 1) {
				ordem_fatorial = 'A';
				fatorial += 1;
			} else {
				fatorial -= 1;
			}
		}

		valor_fatorial = 1;
		for(int i = 1; i <= fatorial; i++) {
			valor_fatorial *= i;
		}
		printf("%d\n", valor_fatorial);
	}

	printf("\n\n");


	printf("O valor da soma será: %.5lf\n", soma);
	return 0;
}
