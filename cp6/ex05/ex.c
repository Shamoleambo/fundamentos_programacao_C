#include <stdio.h>
#include <stdbool.h>

/* Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e mostre os seguintes vetores resultantes:  */

int main() {
	#define v_size 5
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
	for(int i = 0; i < v_size; i++) {
		bool is_not_in_XY = false;
		for(int j = 0; j < 2 * v_size; j++) {
			if(j == 2 * v_size - 1 && Y[i] != XY[j]) is_not_in_XY = true;
			if(Y[i] == XY[j]) break;
		}
		if(is_not_in_XY) {
			XY[cont_XY] = Y[i];
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

	//soma de X e Y:
	for(int i = 0; i < v_size; i++) {
		sumXY[i] = X[i] + Y[i];
	}
	
	//produto de X e Y:
	for(int i = 0; i < v_size; i++) {
		prodXY[i] = X[i] * Y[i];
	}

	//intersecção entre X e Y:
	int count_XandY = 0;
	for(int i = 0; i < v_size; i++) {
		bool is_in_both = false;
		for(int j = 0; j < v_size; j++) {
			if(X[i] == Y[j]) {
				is_in_both = true;
				break;
			}	
		}
		if(is_in_both) {
			bool add_to_XandY = true;
			for(int j = 0; j < v_size; j++) {
				if(X[i] == XandY[j]) add_to_XandY = false;
			}
			if(add_to_XandY) {
				XandY[count_XandY] = X[i];
				count_XandY++;
			}	
		}
	}


	//Imprimindo resultados:
	
	printf("\nVetor união de X e Y:\n\n");
	for(int i = 0; i < v_size * 2; i++) {
		printf("XY[%d] = %d\n", i, XY[i]);
	}
	
	printf("---");
	printf("\nVetor diferença de X e Y:\n\n");
	for(int i = 0; i < v_size; i++) {
		printf("XminusY[%d] = %d\n", i, XminusY[i]);
	}

	printf("---");
	printf("\nVetor soma de X e Y:\n\n");
	for(int i = 0; i < v_size; i++) {
		printf("sumXY[%d] = %d\n", i, sumXY[i]);
	}

	printf("---");
	printf("\nVetor produto de X e Y:\n\n");
	for(int i = 0; i < v_size; i++) {
		printf("prodXY[%d] = %d\n", i, prodXY[i]);
	}

	printf("---");
	printf("\nVetor intersecção de X e Y:\n\n");
	for(int i = 0; i < v_size; i++) {
		printf("XandY[%d] = %d\n", i, XandY[i]);
	}
	
	


	return 0;
}
