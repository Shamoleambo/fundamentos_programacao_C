#include <stdio.h>

/* Faça um programa que receba um número inteiro e verifique se é par ou ímpar.  */

int main() {
	int num;

	printf("Forneça um número inteiro: ");
	scanf("%d%*c", &num);

	if(num % 2 == 0){
		printf("O número %d é par\n", num);
	} else {
		printf("O número %d é impar\n", num);
	}
	return 0;
}
