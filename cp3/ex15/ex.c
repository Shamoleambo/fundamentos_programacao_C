#include <stdio.h>

/* O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
 * a) o valor correspondente ao lucro do distribuidor;
 * b) o valor correspondente aos impostos;
 * c) o preço final do veículo.  */

int main() {
	float preco_final, percentual_lucro, lucro_distribuidor, percentual_impostos, impostos, preco_fabrica;

	printf("Forneça o preço de fábrica do veículo: ");
	scanf("%f%*c", &preco_fabrica);
	printf("Forneça o percentual de lucro do distribuidor: ");
	scanf("%f%*c", &percentual_lucro);
	printf("Forneça o percentual de impostos: ");
	scanf("%f%*c", &percentual_impostos);

	lucro_distribuidor = preco_fabrica * percentual_lucro;
	impostos = preco_fabrica * percentual_impostos;

	preco_final = preco_fabrica + lucro_distribuidor + impostos;
	printf("O lucro do distribuidor´: R$%.2f\nO valor dos impostos é: R$%.2f\nO preço final será: R$%.2f\n", lucro_distribuidor, impostos, preco_final);
	return 0;
}
