#include <stdio.h>
#include <math.h>

/* Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e dos dados necessários para executar cada operação.
 *
 * Menu de opções:
 * 1. Somar dois números.
 * 2. Raíz quadrada de um número.
 * Digite a opção desejada:  */

int main() {
	int opcao;
	double num_soma_1, num_soma_2, sqrt_num, res_soma, res_sqrt;

	printf("Menu de opções:\n1. Somar dois números.\n2. Raíz quadrada de um número.\nDigite a opção desejada: ");
	scanf("%d%*c", &opcao);

	if(opcao == 1) {
		printf("\n\nOpção selecionada: somar dois números.\n");
		printf("Forneça o primeiro número: ");
		scanf("%lf", &num_soma_1);
		printf("Forneça o segundo número: ");
		scanf("%lf", &num_soma_2);

		res_soma = num_soma_1 + num_soma_2;
		printf("%lf + %lf = %lf\n", num_soma_1, num_soma_2, res_soma);
	} else if (opcao == 2) {
		printf("\n\nOpção selecionada: raíz quadrada de um número.\n");
		printf("Forneça um número: ");
		scanf("%lf", &sqrt_num);

		res_sqrt = sqrt(sqrt_num);
		printf("Resultado da raíz quadrada de %lf: %.5lf\n", sqrt_num, res_sqrt);
	}

	return 0;
}
