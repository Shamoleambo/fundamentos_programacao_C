#include <stdio.h>
#include <stdbool.h>

/* Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e mostre os seguintes vetores resultantes:  */

int main() {
	#define v_size 4
	int X[v_size], Y[v_size], XY[2*v_size], XminusY[v_size], sumXY[v_size], prodXY[v_size], XandY[v_size];

	//lendo o vetor X:
	for (int i = 0; i < v_size; i++) {
		printf("Forneça o valor do vetor X na positção %d: ", i);
		scanf("%d%*c", &X[i]);
	}

	//lendo o vetor Y:
	for (int i = 0; i < v_size; i++) {
		printf("Forneça o valor do vetor Y na positção %d: ", i);
		scanf("%d%*c", &Y[i]);
	}

	//união de X e Y:
	int cont_XY = 0;
	for(int i = 0; i < v_size; i++) {
		bool is_not_in_XY = false;
		for(int j = 0; j < 2 * v_size; j++) {
			if(j == 2 * v_size - 1 && X[i] != XY[j]) is_not_in_XY = true;
			if(X[i] == XY[j]) break;
		}
		if(is_not_in_XY) {
			XY[cont_XY] = X[i];
			cont_XY++;
		}
	}

	//apague o de baixo, fiz somente para testar antes de dar commit
	//
	printf("\n\n");
	for(int i = 0; i < 2 * v_size; i++) {
		printf("\nposição %d - valor %d", i, XY[i]);
	}
	printf("\n\n");

	return 0;
}
