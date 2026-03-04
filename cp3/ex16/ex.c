#include <stdio.h>

/* Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
 * a) a hora trabalhada vale a metade do salário mínimo.
 * b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
 * c) o imposto equivale a 3% do salário bruto.
 * d) o salário a receber equivale ao salário bruto menos o imposto.  */

int main () {
	float num_hrs_trab, val_sal_min, salario_receber, hr_trab, sal_bruto, imposto;
	const float taxa_imposto = 0.03;

	printf("Forneça o número de horas trabalhadas: ");
	scanf("%f%*c", &num_hrs_trab);
	printf("Forneça o valor do salário mínimo: ");
	scanf("%f%*c", &val_sal_min);

	hr_trab = val_sal_min / 2;
	sal_bruto = num_hrs_trab * hr_trab;
	imposto = sal_bruto * taxa_imposto;

	salario_receber = sal_bruto - imposto;

	printf("O salário a receber será de R$%.2f\n", salario_receber);
	return 0;
}
