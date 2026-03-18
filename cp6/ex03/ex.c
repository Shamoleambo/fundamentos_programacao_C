#include <stdio.h>

/* Faça um programa que preencha dois vetores de elementos numéricos cada um e mostre o vetor resultante da intercalação deles  */

int main() {
	#define tam_vet 2
	int vet_1[tam_vet], vet_2[tam_vet], vet_res[2*tam_vet];

	//preenchendo o primeiro vetor:
	for(int i = 0; i < tam_vet; i++) {
		printf("Forneça o valor para o primeiro vetor na posição %d: ", i);
		scanf("%d%*c", &vet_1[i]);
	}

	//preenchendo o segundo vetor:
	for(int i = 0; i < tam_vet; i++) {
		printf("Forneça o valor para o segundo vetor na posição %d: ", i);
		scanf("%d%*c", &vet_2[i]);
	}

	//intercalação de vetores:
	int j = 0;
	for(int i = 0; i < tam_vet; i++) {
		vet_res[j] = vet_1[i];
		vet_res[j+1] = vet_2[i];
		j += 2;
	}

	//imprimindo o vetor resultado:
	printf("\n\nResultado:\n");
	for(int i = 0; i < tam_vet * 2; i++){
		printf("%d\n", vet_res[i]);
	}

	return 0;
}
