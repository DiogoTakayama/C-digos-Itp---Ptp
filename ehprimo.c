#include <stdio.h>
#include <stdlib.h>
int main()
{
	int divisores = 0,numPrimo,i=1;


scanf ("%d",&numPrimo);
if (numPrimo <= 0){
	
	printf("Numero negativo ou zero digite un inteiro positivo!!\n");
	exit(EXIT_SUCCESS);

}

if (numPrimo == 1){
	printf("Nao Eh Primo!!\n");
	exit(EXIT_SUCCESS);
}

	while (i <= numPrimo){
		
		
if (numPrimo%i ==0){
	divisores++;

}


i++;

	}



if (divisores==2){

	printf("Eh Primo\n");
	
}else
printf("N Eh Primo\n");

	
	return 0;
}
