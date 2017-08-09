#include <stdio.h>

int main(void){
	

float n1,n2,n3,media;
scanf ("%f%f%f",&n1,&n2,&n3);

media = (n1+n2+n3)/3;

if (media >= 7.0){
	
 	printf("aprovado!\n");
 } 
 else if (media >= 5.0 && n1&&n2&&n3 >= 3.0) {
  	
  	printf("aprovado!\n");
  }  
 
  else if ( media < 3.0){
   	

printf("reprovado!\n");

   }else
   printf("reposicao!\n");

   return 0;

}