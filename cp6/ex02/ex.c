#include <stdio.h>

/* Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos. O vendedor recebe, mensalmente, salário de R$545,00, acrescido de 5% do valor total de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho 10). Depois, determine e mostre:
 * 	um relatório contendo: quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados o valor geral das vendas e o valor da comissão que será paga ao vendedor;
 * 	o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates).  */

int main() {
	#define tam_vet 3
	#define salario 545.0
	#define porcentagem_comissao 0.05

	double valor_objs[tam_vet], valor_venda_cada_obj[tam_vet], valor_comissao = 0.0, comissao_salario, valor_mais_vendido = 0.0;
	int qtde_vendida[tam_vet], posicao_mais_vendido; 

	// input:
	for(int i = 0; i < tam_vet; i++){
		printf("Informe o valor do objeto %d: ", i + 1);
		scanf("%lf%*c", &valor_objs[i]);
		printf("Informe a quantidade vendida do objeto %d: ", i + 1);
		scanf("%d%*c", &qtde_vendida[i]);
	}	
		
	for (int i = 0; i <  tam_vet; i++) {
		valor_venda_cada_obj[i] = valor_objs[i] * qtde_vendida[i];
		valor_comissao += valor_venda_cada_obj[i] * porcentagem_comissao; 
		if(valor_objs[i] > valor_mais_vendido) {
			valor_mais_vendido = valor_objs[i];
			posicao_mais_vendido = i;
		}
	}

	// relatório:
	printf("\n\n");
	for(int i = 0; i < tam_vet; i++) {
		printf("Item %d - qtde vendida: %d - valor total das vendas: R$%.2lf\n", i + 1, qtde_vendida[i], valor_venda_cada_obj[i]);
	}

	printf("\n");
	printf("O valor do objeto mais vendido é: R$%.2lf e sua posição no vetor é: %d\n\n", valor_mais_vendido, posicao_mais_vendido);
	printf("O salário (R$%.2lf) mais a comissão (R$%.2lf) será R$%.2lf\n", salario, valor_comissao, salario + valor_comissao);
	return 0;
}
