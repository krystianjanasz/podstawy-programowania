#include <stdio.h>

void zamiando(int tab[], int tab2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		tab2[i]=tab[i];
	}
}

int main(){
	int n=5;
	int tab[n];
	int tab2[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&tab[i]);
	}
	zamiando(tab,tab2,n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",tab2[i]);
	}
	
	return 0;
}

