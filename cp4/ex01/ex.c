#include <stdio.h>

/* A nota final de um estudante é calculada a partir de três notas distribuídas, respectivamente, a um tabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:
 * 	NOTA				PESO
 * 	Trabalho de laboratório  	2
 * 	Avaliação semestral		3
 * 	Exame final			5
 *
 * Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela:
 * 	MÉDIA PONDERADA			CONCEITO
 * 	8 <= X <= 10			A
 * 	7 <= x < 8			B
 * 	6 <= x < 7			C
 * 	5 <= x < 6			D
 * 	0 <= x < 5			E*/

int main() {
	double nota_lab, nota_aval_sem, nota_exa, media;
	char conceito;

	printf("Forneça a nota do trabalho de laboratório: ");
	scanf("%lf%*c", &nota_lab);
	printf("Forneça a nota da avaliação semestral: ");
	scanf("%lf%*c", &nota_aval_sem);
	printf("Forneça a nota do ecame final: ");
	scanf("%lf%*c", &nota_exa);

	media = ((2 * nota_lab) + (3 * nota_aval_sem) + (5 * nota_exa))/10;

	if (media >= 8 && media <= 10){
		conceito = 'A';
	} else if(media >= 7 && media < 8) {
		conceito = 'B';
	} else if(media >= 6 && media < 7) {
		conceito = 'C';
	} else if(media >= 5 && media <6) {
		conceito = 'D';
	} else {
		conceito = 'E';
	}

	printf("A média final será %lf e o conceito será %c\n", media, conceito);
	return 0;
}
