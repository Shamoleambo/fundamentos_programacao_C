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
	
	//diferença de X e Y:
	int cont_XminusY = 0;
	for(int i = 0 ; i < v_size; i++) {
		bool is_not_in_Y = false;
		for(int j = 0; j < v_size; j++) {
			if(j == v_size - 1 && X[i] != Y[j]) is_not_in_Y = true;
			if(X[i] == Y[j]) break;
		}
		bool add_to_XminusY = false;
		for(int j = 0; j < v_size; j++ ){
			if(j == v_size - 1 && X[i] != XminusY[j]) add_to_XminusY = true;
			if(X[i] == XminusY[j]) break;
		}

		if(is_not_in_Y && add_to_XminusY) {
			XminusY[cont_XminusY] = X[i];
			cont_XminusY++;
		}	
	}
	
	printf("\n");
	for(int i = 0; i < v_size; i++) {
		printf("XminusY[%d] = %d\nd", i, XminusY[i]);
	}


	return 0;
}
