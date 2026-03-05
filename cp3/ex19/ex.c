#include <stdio.h>

/* Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem estar em metros.  */

int main () {
	float altura_degrau, altura_objetivo, qtde_degraus;

	printf("Forneça a altura do degrau: ");
	scanf("%f%*c", &altura_degrau);


	printf("Forneça a altura do objetivo: ");
	scanf("%f%*c", &altura_objetivo);

	qtde_degraus = altura_objetivo / altura_degrau;
	printf("A quantidade de degraus necessária será: %f\n", qtde_degraus);
	return 0;
}
