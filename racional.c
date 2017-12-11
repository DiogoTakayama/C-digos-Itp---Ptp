#include <stdio.h>
#include <stdlib.h>

typedef enum {
    POSITIVO,
    NEGATIVO
} Sinal;

typedef struct {
    Sinal sinal;
    unsigned int numerador;
    unsigned int denominador;
} Racional;


/**
INTRUÃ‡ÃƒO: Implemente uma funÃ§Ã£o que realiza a multiplicaÃ§Ã£o entre dois nÃºmeros racionais. A funÃ§Ã£o deverÃ¡ ter a assinatura abaixo
*/
Racional multiplica_racional( Racional r1, Racional r2 ) {
// Inicio codigo aluno

Racional resultado;

  if (r1.sinal == r2.sinal){
  
  
  resultado.sinal = POSITIVO;
  //printf ("Positivo \n");
}
  else {
  
      resultado.sinal = NEGATIVO;
      //printf ("Negativo \n");

  }
        
    resultado.numerador = r1.numerador * r2.numerador;
    resultado.denominador = r1.denominador * r2.denominador;
    return resultado;


// Fim codigo aluno
}

/*
Racional soma_racional( Racional r1, Racional r2 ) {
// Inicio codigo aluno

Racional result;

  if (r1.sinal == r2.sinal){
  
  
  result.sinal = POSITIVO;
  //printf ("Positivo \n");
}
  else {
  
      result.sinal = NEGATIVO;
      //printf ("Negativo \n");

  }
        
result.numerador =(((mmc (r1.denominador/r2.denominador))/r1.denominador)*r1.numerador) +(((mmc (r1.denominador/r2.denominador))/r2.denominador)*r2.numerador);
    result.denominador = mmc (r1.denominador/r2.denominador);
    return result;


// Fim codigo aluno
}


*/
//
// Função mmc
//
int mmc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}




int main()
{
    int a,b,c,d;
    scanf("%i%i%i%i",&a,&b,&c,&d);
    

    Racional r1,r2,res,resultsoma;
	float soma =((((mmc (b,d)/b)*a) + ((mmc (b,d)/d)*c)));




    r1.numerador=a;

    r1.denominador=b;

    r2.numerador=c;
    r2.denominador=d;



        res = multiplica_racional(r1,r2);
        
	printf("numerador %d\n",res.numerador);
	printf("denominador %d\n",res.denominador);
	printf("MMC   %d\n",mmc (b,d));
    printf("A Soma  %.3f ",soma / mmc (b,d));
    

   // printf ("SINAL \n");
    
    
    
	
	return 0;
}
