#include <stdio.h>

/* Faça um programa que recebe três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 6.
 * 	MÉDIA ARITMÉTICA		MENSAGEM
 * 	0 <= n < 3			Reprovado
 * 	3 <= n < 7			Exame
 * 	7 <= n <= 10			Aprovado  */

int main() {
	double nota_1, nota_2, nota_3, media, nota_apro_exame;

	printf("Forneça a nota da primeira prova: ");
	scanf("%lf%*c", &nota_1);
	printf("Forneça a nota da segunda prova: ");
	scanf("%lf%*c", &nota_2);
	printf("Forneça a nota da terceira prova: ");
	scanf("%lf%*c", &nota_3);

	media  = (nota_1 + nota_2 + nota_3)/3;

	if(media >= 0 && media < 3) {
		printf("\nReprovado\n");
		printf("Média: %lf\n", media);
	} else if (media >= 3 && media < 7){
		printf("\nExame\n");
		printf("Média: %lf\n", media);

		nota_apro_exame = 2 * 6 - media;
		printf("Nota necesserária para aprovação na prova de Exame: %lf\n", nota_apro_exame);
	} else {
		printf("\nAprovado\n");
		printf("Média: %lf\n", media);
	}
	return 0;
}
