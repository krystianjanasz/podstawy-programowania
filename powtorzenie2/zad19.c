#include <stdio.h>

int a(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",a(n));
	
	return 0;
}

int a(int n)
{

	if(n<6)	return n;
	else
	{
		int i;
		int wynik;
		for(i=1;i<=3;i++)
		{
			wynik+=a(n-(2*i));
		}
		return wynik;
	}
}

