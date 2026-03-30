#include <stdio.h>
#include <stdbool.h>

/* Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre o vetor resultante de uma ordenação decrescente.  */

int main() {
	#define vet_size 4
	int vet[vet_size], vet_res[vet_size], posicao_add = 1;
	bool unordered = true;

	for(int i = 0; i < vet_size; i++) {
		printf("Forneça o vetor da posição %d: ", i);
		scanf("%d%*c", &vet[i]);
	}

	//Encontrando o menor valor:
	for(int i = 0; i < vet_size; i++) {
		bool isMenor = true;
		for(int j = 0; j < vet_size; j++){
			if(vet[i] > vet[j]) {
				isMenor = false;
				break;
			}
		}
		printf("\nisMenor: %d\n\n", isMenor);
		if(isMenor) vet_res[0] = vet[i];
	}

	printf("\n\nSai do segundo loop");

	//Organizando a partir do menor e comparando com os posteriores:
	while(unordered) {
		for(int i = 0; i < vet_size; i++) {
			bool addValue = true;
			for(int j = 0; j < vet_size; j++) {
				if(vet[i] > vet[j] && vet[i] <= vet_res[posicao_add - 1]) {
					addValue = false;
					break;
				}
			}

			if(addValue) {
				vet_res[posicao_add] = vet[i];
				posicao_add++;
			}
		}

		if(posicao_add == vet_size - 1) {
			for(int i = 0; i < vet_size; i++) {
				bool addValue = true;
				for(int j = 0; j < vet_size; j++){
					if(vet[i] < vet[j]) {
						addValue = false;
						break;
					}
				}
				if(addValue) {
					vet_res[posicao_add] = vet[i];
					unordered = false;
				}
			}

		}
	}

	printf("Impressão do vetor em ordem decrescente: \n\n");
	for(int i = 0; i < vet_size; i++) {
		printf("%d\n", vet_res[i]);
	}
	return 0;
}
