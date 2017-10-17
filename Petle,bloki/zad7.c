#include <stdio.h>

int main()
{
	int a;
	int i;
	printf("Prosze podac liczbe.\n");
	scanf("%d",&a);
	printf("jej dzielniki to: \n");
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
