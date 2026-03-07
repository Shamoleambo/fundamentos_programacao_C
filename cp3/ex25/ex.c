#include <stdio.h>
#include <math.h>

/* Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado.  */

int main() {
	double custo_espetaculo, preco_convite, qtde_convites;

	printf("Forneça o custo do espetáculo: ");
	scanf("%lf%*c", &custo_espetaculo);
	printf("Forneça o preço do convite: ");
	scanf("%lf%*c", &preco_convite);

	qtde_convites = round(custo_espetaculo / preco_convite);

	printf("A quantidade de convites que devem ser vendidas será %.0lf\n", qtde_convites);
	return 0;
}
