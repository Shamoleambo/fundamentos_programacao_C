#include <stdio.h>
#include <math.h>
#define PI 3.14159

/* Faça um programa que calcule e mostre a área de um círculo.  */

int main () {
	float area, raio;

	printf("Forneça o raio do círculo: ");
	scanf("%f%*c", &raio);

	area = PI * pow(raio, 2);

	printf("A área do círculo de raio %f é: %f\n", raio, area);
	return 0;
}
