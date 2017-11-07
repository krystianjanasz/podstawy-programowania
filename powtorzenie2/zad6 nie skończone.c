#include <stdio.h>

int pierwsza(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",pierwsza(n));
	return 0;
}

int pierwsza(int n)
{
	int i=2;
	int wynik=;
	while(wynik%n==0)
	{
		wynik++;
	}
	return wynik;
}
