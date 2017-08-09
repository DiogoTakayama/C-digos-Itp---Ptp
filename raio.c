#include <stdio.h>
#define pi  3.1416
int main()
{
	float raio;
	printf("Entre com o Raio do circulo \n");
	scanf ("%f",&raio);

	printf(" A area do circulo e: %.2f \n",pi * (raio*raio) );

	return 0;
}