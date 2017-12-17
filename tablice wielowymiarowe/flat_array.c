#include <stdio.h>
#include <stdlib.h>
int main(){
	int pierwszy_wymiar;
	int drugi_wymiar;
	int trzeci_wymiar;
	float liczba=0;
	
	pierwszy_wymiar=2;
	drugi_wymiar=2;
	trzeci_wymiar=2;
	float *tablica=malloc(pierwszy_wymiar*drugi_wymiar*trzeci_wymiar*sizeof(float*));
	int i,j,k;
	for(i=0;i<trzeci_wymiar;i++)
	{
		for(j=0;j<drugi_wymiar;j++)
		{
			for(k=0;k<pierwszy_wymiar;k++)
			{
				tablica[i*drugi_wymiar*pierwszy_wymiar+j*pierwszy_wymiar+k]=liczba;
				liczba++;
			}
		}
	}
	for(i=0;i<trzeci_wymiar;i++)
	{
		for(j=0;j<drugi_wymiar;j++)
		{
			for(k=0;k<pierwszy_wymiar;k++)
			{
				printf("%.2f ",tablica[(i*drugi_wymiar*pierwszy_wymiar)+(j*pierwszy_wymiar)+k]);
				printf(" \n");
			}
		}
	}
	printf(" \n");
	printf(" \n");
	while(1==1)
	{
		printf("pierwszy wymiar:\n");
		scanf("%d",&k);
		printf("drugi wymiar:\n");
		scanf("%d",&j);
		printf("trzeci wymiar:\n");
		scanf("%d",&i);
		printf(" \n");
		printf("%.2f ",tablica[(i*drugi_wymiar*pierwszy_wymiar)+(j*pierwszy_wymiar)+k]);
		printf(" \n");
	}
	
	return 0;
}

