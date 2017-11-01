#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b [10][10];
    int x,y,i,j,a;

    int m [a][a];

    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    scanf("%d",&a);
    for (i=0; i<a; i++){


            scanf("%d%d",&x,&y);
           switch (b[x-1][y-1]){
               case 0: printf("Agua\n");break;
               case 1: printf("Jangada\n");break;
               case 2: printf("Submarino\n");break;
               case 3: printf("Fragata\n");break;
               case 4: printf("Porta-Avioes\n");break;

                default:printf("Erro!!!\n");
    }

    }

    return 0;
}

    }



    return 0;
}
