#include <stdio.h>

int main()
{
	float fahrenheit;
	printf("Digite uma temperatura em graus celsius\n");
	scanf ("%f",&fahrenheit);
	printf("fahrenheit = %.2f\n",fahrenheit * 1.8 + 32 );

	
	return 0;
}