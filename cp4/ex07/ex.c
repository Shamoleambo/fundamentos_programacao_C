#include <stdio.h>

/* Faça um programa que receba quatro valores: I, A, B e C. Desses valores I é inteiro e positivo, A, B e C são reais. Escreva os números A, B e C obedecendo a tabela a seguir.
 * Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.
 *
 * VALOR DE I		FORMA A ESCREVER
 * 1			A, B e C em ordem crescente.
 * 2			A, B e C em ordem decrescente.
 * 3			O maior fica entre os dois números.  */

int main() {
	int i;
	double a, b, c;

	printf("Forneça um número inteiro de 1 a 3: ");
	scanf("%d%*c", &i);

	printf("Forneça um número (A): ");
	scanf("%lf%*c", &a);
	printf("Forneça um número (B): ");
	scanf("%lf%*c", &b);
	printf("Forneça um número (C): ");
	scanf("%lf%*c", &c);

	if(i == 1){
		if(a > b) {
			if(b > c) {
				printf("%lf < %lf < %lf\n", c, b, a);
			} else if(c > a){
				printf("%lf < %lf < %lf\n", b, a, c);
			} else {
				printf("%lf < %lf < %lf\n", b, c, a);
			}
		} else if(b > c) {
			if(a > c) {
				printf("%lf < %lf < %lf\n", c, a, b);
			} else {
				printf("%lf < %lf < %lf\n", a, c, b);
			}
		} else {
			printf("%lf < %lf < %lf\n", a, b, c);
		}
	} else if(i == 2){
		if(a > b) {
			if(b > c) {
				printf("%lf > %lf > %lf\n", a, b, c);
			} else if(c > a){
				printf("%lf > %lf > %lf\n", c, a, b);
			} else {
				printf("%lf > %lf > %lf\n", a, c, b);
			}
		} else if(b > c) {
			if(a > c) {
				printf("%lf > %lf > %lf\n", b, a, c);
			} else {
				printf("%lf > %lf > %lf\n", b, c, a);
			}
		} else {
			printf("%lf > %lf > %lf\n", c, b, a);
		}
	}else {
		if (a > b && a > c) {
			if (b > c) {
				printf("%lf | %lf | %lf\n", c, a, b);
			} else {
				printf("%lf | %lf | %lf\n", a, a, c);
			}
		} else if (b > a && b > c){
			if (a > c) {
				printf("%lf | %lf | %lf\n", c, b, a);
			} else {
				printf("%lf | %lf | %lf\n", a, b, c);
			}
		} else {
			if (a > b) {
				printf("%lf | %lf | %lf\n", b, c, a);
			} else {
				printf("%lf | %lf | %lf\n", a, c, b);
			}
		}
	}
	return 0;
}
