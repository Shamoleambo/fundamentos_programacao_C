#include <stdio.h>
#include <stdbool.h>

/* Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números primos e suas respectivas posições;  */

int main() {
	#define TAMANHO_VETOR 9
	int vet[TAMANHO_VETOR];

	for(int i = 0; i < TAMANHO_VETOR; i++) {
		printf("Forneça o vetor da posição %d: ", i);
		scanf("%d%*c", &vet[i]);
	}

	for(int i = 0; i < TAMANHO_VETOR; i++){
		bool isPrime = true;

		for(int j = 2; j < vet[i]; j++) {
			if(vet[i] % j == 0) isPrime = false;
		}
		if(vet[i] == 1) isPrime = false;

		printf("\n");
		if(isPrime) {
			printf("O número %d na posição %d é primo.\n", vet[i], i);
		}
	}

	return 0;
}
