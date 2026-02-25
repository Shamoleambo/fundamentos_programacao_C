#include <stdio.h>

/* Faça um programa que recebe três notas, calcule e mostre a média aritmética. */

int main (){
	float nota1, nota2, nota3, soma, media;

	printf("Forneça a primeira nota: ");
	scanf("%f%*c", &nota1);
	printf("Forneça a segunda nota: ");
	scanf("%f%*c", &nota2);
	printf("Forneça a terceira nota: ");
	scanf("%f%*c", &nota3);
	
	soma = nota1 + nota2 + nota3;
	media = soma / 3;

	printf("A média das notas %.2f, %.2f, %.2f é: %.2f.\n", nota1, nota2, nota3, media);
}
