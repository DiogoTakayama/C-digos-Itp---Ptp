#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
int main()
{
     //setlocale(LC_ALL,"");
    setlocale(LC_ALL,"portuguese");

    char str1[31],str2[31],str3[61]="";
    printf("Digite uma cadeia de caracteres:");


    fgets( str1, 31, stdin );
    printf("Digite outra cadeia de caracteres:");

fgets( str2, 31, stdin );

    printf("str1:%s\n",str1);
     printf("str2:%s\n",str2);

   strcat(str3,str1);
    strcat(str3,str2);

        printf("str3:%s\n",str3);

    return 0;

}
