#include <stdio.h>

/* Faça um programa que recebe três notas e seus respectivos pesos, calcule e mostre a média ponderada. */

int main() {
	int p1, p2, p3;
	float nota1, nota2, nota3, soma, media;

	printf("Forneça a primeira nota: ");
	scanf("%f%*c", &nota1);
	printf("Forneça o peso da primeira prova: ");
	scanf("%d%*c", &p1);

	printf("Forneça a segunda nota: ");
	scanf("%f%*c", &nota2);
	printf("Forneça o peso da segunda prova: ");
	scanf("%d%*c", &p2);

	printf("Forneça a terceira nota: ");
	scanf("%f%*c", &nota3);
	printf("Forneça o peso da terceira prova: ");
	scanf("%d%*c", &p3);
	
	soma = nota1*p1 + nota2*p2 + nota3*p3;
	media = soma / (p1 + p2 + p3);

	printf("A média das notas é: %.2f\n", media);

	return 0;
}
