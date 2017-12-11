#include <stdio.h>
#include  <strings.h>
#include <string.h>
#include <stdlib.h>

char *inverter (char *str)
{
        int len = strlen(str);
        char *rev = (char*)malloc(len * sizeof(char));
         int i,j;

        for (i = len-1, j=0; i >= 0; i--,j++)
            rev[j] = str[i];

        return rev;
}

int main(void)
{
	char frase [80];
	
	fgets (frase,80,stdin);
        printf("% s\n", inverter(frase));
        return 0;
}
