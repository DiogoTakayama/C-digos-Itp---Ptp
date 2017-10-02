#include <stdio.h>
#include <stdlib.h>



    int max (int x, int y){

    int resultado;
    if (x>y){
        resultado = x;
    }else {

    resultado = y;
    }
    return resultado;

    /*resultado=x>y?x:y;

    return resultado;

    */
    }

                                                            
                                                             
    int main(){

    int result,a,b;
    scanf("%d%d",&a,&b);
    result = max(a,b);
    printf("resultado = %d ",result);

    }


