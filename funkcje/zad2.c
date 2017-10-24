#include <stdio.h>

void dzielniki();

int main()
{
	int n;
	printf("Dzielniki.\n");
	printf("Podaj liczbe.\n");
	scanf("%d",&n);
	printf("Dzielniki tej liczby to:\n");
	dzielniki(n);
	
	return 0;
}
void dzielniki(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("% d",i);
	}
	printf(".\n");
	
}
