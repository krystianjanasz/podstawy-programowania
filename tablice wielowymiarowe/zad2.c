#include <stdio.h>
#include <stdlib.h>

void zwalniacz(double **tab, int n, int m)
{
	int i;
	for(i=0;i<n;i++)
	{
		free(*(tab+i));
	}
	free(tab);
}

int main(){
	
	int n;
	int m;
	n=4;
	m=5;
	double **tab=malloc(n*sizeof(double**));
	int i;
	for(i=0;i<n;i++)
	{
		*(tab+i)=malloc(m*sizeof(double*));
	}
	zwalniacz(tab,n,m);
	return 0;
}

