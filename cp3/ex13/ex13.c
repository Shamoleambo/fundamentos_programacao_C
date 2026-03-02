#include <stdio.h>

/* Sabe-se que:
 * pé = 12 polegadas
 * 1 jarda = 3 pés
 * 1 milha = 1.760 jarda
 * Faça um programa que receba uma medida em pés, faça as conversões e a seguir e mostre os resultados.
 * a) polegadas;
 * b) jardas;
 * c) milhas.  */

int main () {
	float polegada, pe, jarda, milha;

	printf("Forneça a medida em pés: ");
	scanf("%f%*c", &pe);

	polegada = pe * 12;
	jarda = pe / 3;
	milha = jarda / 1760;

	printf("%f pés em polegadas será = %f\n", pe, polegada);
	printf("%f pés em jardas será = %f\n", pe, jarda);
	printf("%f pés em milhas será = %f\n", pe, milha);
	return 0;
}
