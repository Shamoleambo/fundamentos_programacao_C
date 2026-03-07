#include <stdio.h>
#include <math.h>

/* Faça um programa que receba um número real, encontre e mostre:
 * a) a parte inteira desse número;
 * b) a parte fracionária desse número;
 * c) o arredondamento desse número.  */

int main() {
	double numero, parte_inteira, parte_fracionaria, arredondamento;

	printf("Forneça um número real: ");
	scanf("%lf%*c", &numero);

	parte_fracionaria = fmod(numero, 1);
	parte_inteira = numero - parte_fracionaria;

	arredondamento = round(numero);

	printf("Número: %lf\nParte inteira: %lf\nParte Fracionária: %lf\nArredondamento: %lf\n", numero, parte_inteira, parte_fracionaria, arredondamento);
	return 0;
}
