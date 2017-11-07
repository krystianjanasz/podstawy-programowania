#include <stdio.h>

int suma3(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",suma3(n));
	return 0;
}

int suma3(int n)
{
	int i;
	int wynik=0;
	for(i=0;i<3;i++)
	{
		wynik=wynik+n;
		n--;
	}
return wynik;	
}

