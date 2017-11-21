#include <stdio.h>
#include <stdbool.h>

bool tak(int tab[])
{
	int suma=0;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&tab[i]);
		suma=suma+(tab[i]*tab[i]);
	}
	if(suma>30) return true;
	else return false;
}

int main(){
	int tab[5];
	if(tak(tab))
	{
	printf("wieksze od 30");
	}	
	else printf("nie wieksze");
	return 0;
}

