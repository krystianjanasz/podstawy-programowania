#include <stdio.h>

void kwadraty();

int main(){
	int n;	
	printf("Kwadraty liczb nieparzystych:\n");
	printf("Podaj n.\n");
	scanf("%d",&n);
	printf("Kwadraty liczb nieparzystych mniejszych od %d wynosza:\n",n);
	kwadraty(n);
	return 0;
}

void kwadraty(int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		if(i%2!=0)	printf(" %d",i*i);
	}
	printf(".\n");
}
