#include <stdio.h>

/* Faça um programa que receba três números obrigatóriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.  */

int main() {
	double num1, num2, num3, num_dif;

	printf("Forneça o primeiro número: ");
	scanf("%lf%*c", &num1);
	printf("Forneça o segundo número: ");
	scanf("%lf%*c", &num2);
	printf("Forneça o terceiro número: ");
	scanf("%lf%*c", &num3);

	printf("Forneça o número diferente: ");
	scanf("%lf%*c", &num_dif);

	if(num_dif > num3) {
		printf("%lf > %lf > %lf > %lf\n", num_dif, num3, num2, num1);
	} else if(num_dif > num2) {
		printf("%lf > %lf > %lf > %lf\n", num3, num_dif,  num2, num1);
	} else if(num_dif > num1){
		printf("%lf > %lf > %lf > %lf\n", num3, num2, num_dif, num1);
	} else {
		printf("%lf > %lf > %lf > %lf\n", num3, num2, num1, num_dif);
	}
	return 0;
}
