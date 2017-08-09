#include <stdio.h>
int main()
{
	int n1,n2,resto;

	scanf ("%d%d",&n1,&n2);

	resto = n1%n2;

	while (resto!=0){

		n1 = n2;

		n2 = resto;
		resto = n1%n2;
	}
	printf("mdc: %i\n",n2);
	
	return 0;
}