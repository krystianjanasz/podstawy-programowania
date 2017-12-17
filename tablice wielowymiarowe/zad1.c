#include <stdio.h>
#include <stdlib.h>

double **tablica(int n,int m)
{
	double **tab=malloc(n*sizeof(double**));
	int i;
	for(i=0;i<n;i++)
	{
		*(tab+i)=malloc(m*sizeof(double*));
	}
	return tab;
}

int main(){
	int n;
	int m;
	n=4;
	m=5;
	printf("%p",tablica(n,m));
	
	return 0;
}

