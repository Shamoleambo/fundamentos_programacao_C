#include <stdio.h>
#include <math.h>

/* Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro.
 * e,lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar. */

int main () {
	float comprimento_escada, altura_quadro, distancia_parede;

	printf("Foeneça o comprimento da escada: ");
	scanf("%f%*c", &comprimento_escada);
	printf("Foeneça a altura do quadro na parede: ");
	scanf("%f%*c", &altura_quadro);

	distancia_parede = sqrt(pow(comprimento_escada, 2) - pow(altura_quadro, 2));
	printf("A distância da escada até a parede será de: %.3f\n", distancia_parede);
	return 0;
}
