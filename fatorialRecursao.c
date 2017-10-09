#include <stdio.h>
int fat(int n)
{
	if (n<=1)
  	 return 1;
	 else return n*fat(n-1);
}

int main()
{
	int n;
	printf("\n Digite n: ");
	scanf("%d", &n);
	printf("\nO fatorial de %d: %d\n", n, fat(n));
	return 0;
}
