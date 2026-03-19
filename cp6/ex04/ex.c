#include <stdio.h>

/* Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos e o segundo, os números
 * negativos. Cada vetor resultante vai ter, no máximo, oito posições, que não poderão ser completamente utilizadas.  */

int main() {
	#define tam_vet 8
	int vet[tam_vet], vet_res_1[tam_vet], vet_res_2[tam_vet], contador_vr_1 = 0, contador_vr_2 = 0;

	//preenchdendo o vetor:
	for(int i = 0; i < tam_vet; i++) {
		printf("Forneça o valor da posição %d: ", i);
		scanf("%d%*c", &vet[i]);
	}

	//separando os valores positivos dos negativos:
	for(int i = 0; i < tam_vet; i++) {
		if(vet[i] >= 0) {
			vet_res_1[contador_vr_1] = vet[i];
			contador_vr_1++;
		} else {
			vet_res_2[contador_vr_2] = vet[i];
			contador_vr_2++;
		}
	}

	//impressão dos valores:
	printf("\nImpressão do vetor resultante 1 (positivos):\n");
	for(int i = 0; i < contador_vr_1; i++){
		printf("posição %d - valor %d\n", i, vet_res_1[i]);
	}

	printf("\n\nImpressão do vetor resultante 2 (negativos):\n");
	for(int i = 0; i < contador_vr_2; i++){
		printf("posição %d - valor %d\n", i, vet_res_2[i]);
	}
	return 0;
}
