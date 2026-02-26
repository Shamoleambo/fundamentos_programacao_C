#include <stdio.h>

/* Faça um programa que receba o salário base de um funcionário, calcule e mostre o seus salário a receber, sabendo-se que o funcionário tem gratificação de R$50,00 e paga imposto de 10% sobre o salário base  */

int main () {
	float salario_base, salario_receber, gratificacao = 10, imposto = 0.1;

	printf("Forneça o salário base do funcionário: ");
	scanf("%f%*c", &salario_base);

	salario_receber = salario_base + gratificacao - (salario_base*imposto);

	printf("O salário a receber será: R$%.2f\n", salario_receber);
	return 0;
}
