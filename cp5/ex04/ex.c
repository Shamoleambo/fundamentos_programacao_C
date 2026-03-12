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
	char cod_cid;
	int menor_ind_ac_tran, qtde_cid_menos_2000_vei = 0,  total_veiculo = 0, total_ac_menos_2000_vei = 0;
	double med_vei_5_cid, med_ac_menos_2000;

	for(int i = 0; i < 5; i++){
		int veiculos_cidade;
		int acidentes;
		char cod;

		printf("Forneça o código da cidade: ");
		scanf("%c%*c", &cod);
		printf("Forneça o número de veículos de passeio dessa cidade: ");
		scanf("%d%*c", &veiculos_cidade);
		printf("Forneça o número de acidentes de trânsito com vítimas: ");
		scanf("%d%*c", &acidentes);

		if(i == 0){
			menor_ind_ac_tran = acidentes;
			cod_cid = cod;
		} else {
			if(menor_ind_ac_tran > acidentes) {
				menor_ind_ac_tran = acidentes;
				cod_cid = cod;
			}
		}

		total_veiculo += veiculos_cidade;
		
		if(veiculos_cidade < 2000) {
			total_ac_menos_2000_vei += acidentes;
			qtde_cid_menos_2000_vei += 1;
		}
		printf("\n\n");
	}

	med_vei_5_cid = total_veiculo / 5;
	med_ac_menos_2000 = (double) total_ac_menos_2000_vei / qtde_cid_menos_2000_vei;

	printf("a) O menor índice corresponde a cidade com o código %c e é: %d\n\n", cod_cid, menor_ind_ac_tran);
	printf("b) A média de veículos das cinco cidades é: %.3lf\n\n", med_vei_5_cid);
	printf("c) A média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio é: %.3lf\n\n", med_ac_menos_2000);
	return 0;
}
