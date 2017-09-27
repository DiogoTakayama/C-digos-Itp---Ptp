#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
int main()
{
     setlocale(LC_ALL,"");
   // setlocale(LC_ALL,"portuguese");
    int i;
    char str [30];
    printf("Digite uma cadeia de caracteres:");
    //scanf (" %[^\n]%*c",str);
    gets(str);

    printf("Voçê digitou:%s\n",str);
   // printf("%c",str[0]);
   // printf("%c\n",str[1]);
    for (i=0;str[i]!='\0';i++){


        printf("%c",str[i]);
    }
    return 0;

}
