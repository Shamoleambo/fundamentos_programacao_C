#include <stdio.h>

/* Faça um programa que receba um salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base. */

int main(){
	float salario_base, salario_receber, gratificacao, imposto;

	printf("Digite o salário base do funcionário: ");
	scanf("%f%*c", &salario_base);

	gratificacao = salario_base * 0.05;
	imposto = salario_base * 0.07;
	salario_receber = salario_base - imposto + gratificacao;

	printf("O salário base mais a gratificação (R$%.2f), menos o imposto (R$%.2f) será de R$%.2f\n", gratificacao, imposto, salario_receber);
	return 0;
}
