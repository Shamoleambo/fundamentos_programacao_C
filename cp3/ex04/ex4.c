#include <stdio.h>

/* Faça um programa que recebe o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25% */

int main (){
	float salario;

	printf("Digite o salário para o calculo do aumento de 25%%: ");
	scanf("%f%*c", &salario);

	salario = 1.25 * salario;

	printf("O salario novo será: R$%.2f\n", salario);
	return 0;
}
