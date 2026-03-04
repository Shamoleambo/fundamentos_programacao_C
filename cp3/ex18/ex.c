#include <stdio.h>

/* Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a mesma. Faça um programa que recebe o peso do saco de ração e aquantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cinco dias  */

int main () {
	float peso_saco, qtde_g_1, qtde_g_2, restante_saco;

	printf("Forneça o peso do saco de ração (kg): ");
	scanf("%f%*c", &peso_saco);
	printf("Forneça a quantidade de ração que o primeiro gato come(g): ");
	scanf("%f%*c", &qtde_g_1);
	printf("Forneça a quantidade de ração que o segundo gato come(g): ");
	scanf("%f%*c", &qtde_g_2);

	restante_saco = peso_saco - 5 * (qtde_g_1 + qtde_g_2)/1000;
	printf("O saco ficará com %.3fkg\n", restante_saco);
	return 0;
}
