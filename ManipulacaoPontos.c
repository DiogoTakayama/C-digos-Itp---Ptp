#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,y;
 printf("Quantos pontos?");
 scanf("%i",&n);

    FILE *arquivo = fopen("pontos.txt","w");
    if (arquivo == NULL)
    {

        printf("Erro na abertura do arquivo!\n");
    exit(1);
    }else{

        fprintf(arquivo,"numero=%i\n",n);
        for (i=0;i<n;i++){
            printf("Digite um ponto %i:\n",i+1);
            scanf("%i%i",&x,&y);
            fprintf(arquivo,"%i%i\n",x,y);

        }
        fclose(arquivo);
    }





    return 0;
}
