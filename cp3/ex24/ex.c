#include <stdio.h>
#include <math.h>

/* Faça um programa que receba uma hora formada por hora e minuto (um número real), calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
 * *para quatro e meia, deve-se digitar 4.30
 * *os minutos vão de 0 a 59  */

int main() {
	double hora_completa, hora, minutos, minutos_totais;

	printf("Digite a hora para conversão: ");
	scanf("%lf%*c", &hora_completa);

	minutos = fmod(hora_completa, 1) * 100;
	hora = hora_completa - fmod(hora_completa, 1);
	minutos_totais = hora * 60 + minutos;

	printf("Apenas hora: %lf\nApenas minutos: %lf\nTotal em minutos da hora digitada (%lf): %.0lf\n", hora, minutos, hora_completa, minutos_totais);
	return 0;
}
