#include <stdio.h>

/* Faça um programa que receba um valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.  */

int main () {
	float deposito, taxa_juros, rendimento, total;

	printf("Forneça o valor do depósito: ");
	scanf("%f%*c", &deposito);
	printf("Forneça o valor da taxa de juros: ");
	scanf("%f%*c", &taxa_juros);

	rendimento = deposito * (taxa_juros/100);
	total = deposito + rendimento;

	printf("O valor do rendimento será de: R$%.2f\nO valor total será de: R$%.2f\n", rendimento, total);
	return 0;
}
