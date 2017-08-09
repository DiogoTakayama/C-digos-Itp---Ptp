#include <stdio.h>
int main()
{
	int divisores = 0,numPrimo,i;
scanf ("%d",&numPrimo);
	for ( i = 1; i <= numPrimo; ++i)
	{
		
if (numPrimo%i ==0)
{
	divisores++;
}

	}



if (divisores==2)
{

	printf("Eh Primo\n");
	
}else
printf("N Eh Primo\n");

	
	return 0;
}