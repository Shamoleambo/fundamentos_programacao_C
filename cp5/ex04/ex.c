#include <stdio.h>

/* Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
 * Foram obtidos os seguintes dados:
 * 	a) código da cidade;
 * 	b) número de veículos de passeio;
 * 	c) número de acidentes de trânsito com vítmias.
 * Deseja-se saber:
 * 	a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
 * 	b) qual é a média de veículos nas cinco cidades juntas;
 * 	c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.  */

int main() {
	int cod_cid_1, qtde_vei_pass_1, acidentes_1;
	int cod_cid_2, qtde_vei_pass_2, acidentes_2;
	int cod_cid_3, qtde_vei_pass_3, acidentes_3;
	int cod_cid_4, qtde_vei_pass_4, acidentes_4;
	int cod_cid_5, qtde_vei_pass_5, acidentes_5;

	//Leitura
	printf("Forneça o código da cidade %d: ", 1);
	scanf("%d%*c", &cod_ci_1);
	printf("Forneça a quantidade de veículos de passeio da cidade %d: ", 1);
	scanf("%d%*c", &qtde_vei_pass_1);
	printf("Forneça a quantidade de acidentes com vítimas da cidade %d: ", 1);
	scanf("%d%*c", &acidentes_1);


	printf("Forneça o código da cidade %d: ", 2);
	scanf("%d%*c", &cod_ci_2);
	printf("Forneça a quantidade de veículos de passeio da cidade %d: ", 2);
	scanf("%d%*c", &qtde_vei_pass_2);
	printf("Forneça a quantidade de acidentes com vítimas da cidade %d: ", 2);
	scanf("%d%*c", &acidentes_2);


	printf("Forneça o código da cidade %d: ", 3);
	scanf("%d%*c", &cod_ci_3);
	printf("Forneça a quantidade de veículos de passeio da cidade %d: ", 3);
	scanf("%d%*c", &qtde_vei_pass_3);
	printf("Forneça a quantidade de acidentes com vítimas da cidade %d: ", 3);
	scanf("%d%*c", &acidentes_3);


	printf("Forneça o código da cidade %d: ", 4);
	scanf("%d%*c", &cod_ci_4);
	printf("Forneça a quantidade de veículos de passeio da cidade %d: ", 4);
	scanf("%d%*c", &qtde_vei_pass_4);
	printf("Forneça a quantidade de acidentes com vítimas da cidade %d: ", 4);
	scanf("%d%*c", &acidentes_4);


	printf("Forneça o código da cidade %d: ", 5);
	scanf("%d%*c", &cod_ci_5);
	printf("Forneça a quantidade de veículos de passeio da cidade %d: ", 5);
	scanf("%d%*c", &qtde_vei_pass_5);
	printf("Forneça a quantidade de acidentes com vítimas da cidade %d: ", 5);
	scanf("%d%*c", &acidentes_5);
	return 0;
}
