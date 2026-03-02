#include <stdio.h>
#include <math.h>

/* Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.  */

int main () {
	float num1, num2, resultado;

	printf("Forneça um número maior que zero: ");
	scanf("%f%*c", &num1);
	printf("Forneça outro número maior que zero: ");
	scanf("%f%*c", &num2);

	resultado = pow(num1, num2);
	printf("O número %f elevado a %f = %f\n", num1, num2, resultado);
	return 0;
}
