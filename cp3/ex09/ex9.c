#include <stdio.h>

/* Faça um programa que calcule e mostre a áre de um triângulo. */

int main () {
	float base, altura, area;

	printf("Forneça a base do triângulo: ");
	scanf("%f%*c", &base);
	printf("Forneça a altura do triângulo: ");
	scanf("%f%*c", &altura);

	area = (base * altura)/2;

	printf("A área do triângulo será: %.2f\n", area);
	return 0;
}
