#include <stdio.h>

/* Faça um programa que leia o número N que indica quantos valores inteiros e positivos devem ser lidos a seguir. PAra cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor  */

int main() {
	int N;

	printf("Quantas leituras o programa fará? ");
	scanf("%d%*c", &N);


	for(int i = 0; i < N; i++) {
		int num, fatorial = 1;
		printf("Forneça o %dº número: ", i + 1);
		scanf("%d%*c", &num);

		for(int j = 1; j <= num; j++) {
			fatorial *= j;
		}
		printf("\n\n\tNúmero\t\tFatorial\n");
		printf("\t%d\t\t%d\n", num, fatorial);
		printf("\t---\t\t---\n");
	}

	return 0;
}
