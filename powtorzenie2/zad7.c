#include <stdio.h>

void podzielne(int n,int m);

int main(){
	int n;
	int m;
	scanf("%d %d", &n, &m);
	podzielne(n,m);
	return 0;
}

void podzielne(int n, int m)
{
	int i;
	for(i=1;i<n;i++)
	{
		if(i%m==0)
		printf("%d ",i);
	}
}

