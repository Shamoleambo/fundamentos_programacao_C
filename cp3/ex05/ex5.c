#include <stdio.h>

/*  */

int main(){
	float salario, aumento_percentual, novo_salario;

	printf("Forneça o salário do funcionário: ");
	scanf("%f%*c", &salario);
	printf("Forneça o aumento percentual que ele terá: ");
	scanf("%f%*c", &aumento_percentual);

	novo_salario = salario * (1 + aumento_percentual/100);

	printf("O novo salário será: R$%.2f\n", novo_salario);
	return 0;
}
