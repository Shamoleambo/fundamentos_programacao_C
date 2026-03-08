#include <stdio.h>

/* Faça um programa que recebe dois números e mostre o maior */

int main() {
	double num_1, num_2;

	printf("Forneça o primeiro número: ");
	scanf("%lf%*c", &num_1);
	printf("Forneça o segundo número: ");
	scanf("%lf%*c", &num_2);

	if(num_1 > num_2) {
		printf("O primeiro número (%lf) é o maior\n", num_1);
	} else if(num_2 > num_1) {
		printf("O segundo número (%lf) é o maiot\n", num_2);
	} else {
		printf("Os dois números são iguais: %lf = %lf\n", num_1, num_2);
	}
	return 0;
}
