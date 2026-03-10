#include <stdio.h>

/* Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
 * a) Esse funcionário foi contratado em 2005, com um salário inicial de R$1.000,00.
 * b) Em 2006 ele recebeu um aumento de 1,5% sobre seu salário inicial.
 * c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano anterior.
 *
 * Faça um programa que determine o salário atual desse funcionário.  */

int main() {
	double salario = 1000, aumento = 1.015;

	for(int i = 2006; i <= 2026; i++) {
		salario *= aumento;
		aumento = 1 + (aumento - 1) * 2;
	}	
	printf("O salário atual será: R$%.2lf\n", salario);
	return 0;
}
