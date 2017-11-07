#include <stdio.h>
int potega(int p, int n);

int main(){
	int p;
	int n;
	scanf("%d %d",&p,&n);
	printf("%d",potega(p,n));
	return 0;
}

int potega(int p, int n)
{
	int i;
	int wynik;
	wynik=1;
	for(i=0;i<n;i++)
	{
		wynik*=p;
	}
	return wynik;
}
	

