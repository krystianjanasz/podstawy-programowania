#include <stdio.h>
void zamiando_turbo(int tab[],int tab2[],int tab3[],int n)
{
	int i;
	int j=0;
	for(i=0;i<2*n;i++)
	{
		if(i%2==0)
		{
		tab[i]=tab2[i];

		}
		else
		{
		tab[i]=tab3[i];

		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int tab[2*n];
	int tab2[n];
	int tab3[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&tab2[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&tab3[i]);
	}	
	printf("\n");
	zamiando_turbo(tab,tab2,tab3,n);
	for(i=0;i<2*n;i++)
	{
		printf("%d\n",tab[i]);
	}
	return 0;
}

