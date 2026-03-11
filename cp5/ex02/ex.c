#include <stdio.h>

/* Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a fórmula a seguir:
 * 	E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!  */

int main() {
	int num;
	double resultado = 1;

	printf("Forneça um número inteiro positivo: ");
	scanf("%d%*c", &num);

	for(int i = 1; i <= num; i++) {
		double fatorial = 1;
		for(int j = 1; j <= i; j++) {
			fatorial *= j;
		}
		resultado += 1/fatorial;
	}

	printf("E = %.8lf\n", resultado);
	return 0;
}
