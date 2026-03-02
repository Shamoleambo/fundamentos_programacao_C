#include <stdio.h>
#include <math.h>

/* 
 * Faça um programa que receba um número positivo e maior que zero, calcule e mostre
 *	a) o número digitado ao quadrado;
 *	b) o número digitado ao cubo;
 *	c) a raíz quadrada do número digitado;
 *	d) a raíz cúbica do número digitado.
 * */

int main(){
	float num, quad, cubo, raiz_2, raiz_3;

	printf("Forneça o número para os claculos (deve ser positivo e maior que zero): ");
	scanf("%f%*c", &num);

	quad = pow(num, 2);
	cubo = pow(num, 3);
	raiz_2 = sqrt(num);
	raiz_3 = cbrt(num);

	printf("%f² = %f\n", num, quad);
	printf("%f³ = %f\n", num, cubo);
	printf("raiz quadrada de %f = %f\n", num, raiz_2);
	printf("raiz cubica de %f = %f\n", num, raiz_3);
	return 0;
}
