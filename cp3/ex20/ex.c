#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

/* Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule calcule e mostre a medida dessa escada.
 * Obs.: as funções trigonométricas implementadas nas linguagens de programação trabalham com medidas em radianos.  */

int main () {
	float angulo_graus, angulo_rad, altura_parede, comprimento_escada;
	
	printf("Forneça o ângulo de inclinação da escada em relação a parede: ");
	scanf("%f%*c", &angulo_graus);
	printf("Forneça a altura da parede: ");
	scanf("%f%*c", &altura_parede);

	angulo_rad = (angulo_graus * M_PI) / 180;
	comprimento_escada = altura_parede / sin(angulo_rad);

	printf("O comprimento da escada é %.3fm\n", comprimento_escada);
	
	return 0;
}
