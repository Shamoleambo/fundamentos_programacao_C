#include <stdio.h>

/* Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que recebe o valor do salário mínimo e a quatidade quilowatts consumida por uma residência. Calcule e mostre:
 * a) o valor de cada quilowatt;
 * b) o valor a ser pago por essa residência;
 * c) o valor a ser pago com desconto de 15%.  */

int main () {
	double salario_min, qtde_kw, val_und_kw, total, total_desconto;

	printf("Forneça o valor do salário mínimo: ");
	scanf("%lf%*c", &salario_min);
	printf("Forneça a quantidade de quilowatts consumida: ");
	scanf("%lf%*c", &qtde_kw);

	val_und_kw = salario_min / 5;
	total = val_und_kw * qtde_kw;
	total_desconto = 0.85 * total;

	printf("O valor unitário de cada quilowatt é: R$%.2lf\n", val_und_kw);
	printf("O total a ser pago por essa residência será: R$%.2lf\n", total);
	printf("O total com desconto de 15%% a ser pago será: R$%.2lf\n", total_desconto);
	return 0;
}
