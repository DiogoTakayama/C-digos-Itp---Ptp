#include <stdio.h>
int main (){

int  a = 0,b,count = 11,i;

printf("Digite qual tabuada voce quer ver:\n");

scanf ("%d",&a);

printf("\n");

for ( i = 1; i < count; i++)
{
printf("%d X %d = %d\n",a,i,a * i );	
}
return 0;
}