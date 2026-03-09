#include <stdio.h>

/* Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes.  */

int main() {
	double num_1, num_2, num_3;

	printf("Forneça o primeiro número: ");
	scanf("%lf%*c", &num_1);
	printf("Forneça o segundo número: ");
	scanf("%lf%*c", &num_2);
	printf("Forneça o terceiro número: ");
	scanf("%lf%*c", &num_3);
	
	if(num_1 > num_2) {
		if(num_1 > num_3) {
			if(num_2 > num_3) {
				printf("%lf > %lf > %lf\n", num_1, num_2, num_3);
			} else {
				printf("%lf > %lf > %lf\n", num_1, num_3, num_2);
			}
		} else {	
			printf("%lf > %lf > %lf\n", num_3, num_1, num_2);
		}
	} else if (num_2 > num_3) {
		if(num_1 > num_3) {
			printf("%lf > %lf > %lf\n", num_2, num_1, num_3);
		} else {
			printf("%lf > %lf > %lf\n", num_2, num_3, num_1);
		}
	} else {
		printf("%lf > %lf > %lf\n", num_3, num_2, num_1);
	}


	return 0;
}
