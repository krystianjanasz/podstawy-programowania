#include <stdio.h>

int cyfry(int x);

int main(){
	int x;
	scanf("%d",&x);
	printf("%d",cyfry(x));
	return 0;
}

int cyfry(int x)
{
	int i=10;
	int liczba=0;
	int licznik=0;
	do
	{
		liczba=x%i;
		if(liczba%3==0 && liczba!=0)	licznik++;
		x=x-liczba;
		i*=10;
	}while(i/10<=x);
	return licznik;
}

