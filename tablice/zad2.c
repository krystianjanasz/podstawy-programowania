#include <stdio.h>

int N=80;

void wypelnij(int tab[], int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(i%2==0)
		tab[i]=i;
		else tab[i]=0;
	}
}

int main(){
	int tab[N];
	wypelnij(tab,N);
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d\n", tab[i]);
	}
	return 0;
}

