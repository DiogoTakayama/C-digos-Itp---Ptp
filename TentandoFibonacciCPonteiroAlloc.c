#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned long int i=0,numeroFib=0,*sequenciaFib,*operFib;


      printf("Sequencia Fibonacci Maior do que 2: ");
      scanf("%d",&numeroFib);

  sequenciaFib=(unsigned long int *)
  malloc(sizeof(unsigned long int)*numeroFib);
  if(!sequenciaFib)
    {
      printf("Sem memoria...................\n");
      return(1);
    }

  operFib=sequenciaFib;

  *operFib=1;
  ++operFib;
  *operFib=1;
  ++operFib;

  for (i=0;i<numeroFib-2;i++)
    {
      *operFib= *(operFib-1) + *(operFib-2);
      operFib++;
    }

  operFib=sequenciaFib;

  for (i=0;i<numeroFib;i++)
    {
      printf("%d\n",*operFib);
      ++operFib;
    }


  free(sequenciaFib);

  return(0);
}
