#include <stdio.h>

int suma_niep();

int main()
{
	int n;
	printf("Suma liczb nieparzystych z przedzialu do n:\n");
	printf("Podaj n.\n");
	scanf("%d",&n);
	printf("Suma wynosi %d.\n",suma_niep(n));
	return 0;
}

int suma_niep(int n)
{
	int i;
	int wynik;
	wynik=0;
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		wynik+=i;
	}
	return wynik;
}
