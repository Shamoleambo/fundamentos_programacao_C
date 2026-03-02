#include <stdio.h>

/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
 * a) a idade da pessoa;
 * b) quantos anos ela terá em 2050.  */

int main () {
	int ano_nasc, idade, idade_2050;

	printf("Forneça o ano de nascimento da pessoa: ");
	scanf("%d%*c", &ano_nasc);

	idade = 2026 - ano_nasc;
	idade_2050 = 2050 - ano_nasc;

	printf("A pessoa tem: %d anos\n", idade);
	printf("A pessoa terá %d anos em 2050\n", idade_2050);
	return 0;
}
