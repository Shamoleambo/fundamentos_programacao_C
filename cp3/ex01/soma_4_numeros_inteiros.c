#include <stdio.h>

int main (){
	int num1, num2, num3, num4, soma;

	printf("Forneça o primeiro número: ");
	scanf("%d%*c", &num1);

	printf("Forneça o segundo número: ");
	scanf("%d%*c", &num2);

	printf("Forneça o terceiro número: ");
	scanf("%d%*c", &num3);

	printf("Forneça o quarto número: ");
	scanf("%d%*c", &num4);

	soma = num1 + num2 + num3 + num4;
	printf("A soma dos números é %d\n", soma);
	return 0;
}
