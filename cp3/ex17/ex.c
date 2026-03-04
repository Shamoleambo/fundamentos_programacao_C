#include <stdio.h>

/* Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.  */

int main() {
	float salario, saldo = 0, valor_cq_1, valor_cq_2;
	const float taxa_CPMF = 0.0038;

	printf("Forneça o salário: ");
	scanf("%f%*c", &salario);
	printf("Forneça o valor do primeiro cheque: ");
	scanf("%f%*c", &valor_cq_1);
	printf("Forneça o valor do segundo cheque: ");
	scanf("%f%*c", &valor_cq_2);

	saldo = salario;
	saldo -= (valor_cq_1 + valor_cq_2) * (taxa_CPMF + 1);

	printf("O saldo na conta será de R$%.2f\n", saldo);
	return 0;
}
