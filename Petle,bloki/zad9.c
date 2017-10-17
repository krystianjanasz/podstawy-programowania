#include <stdio.h>

int main()
{
	int a1;
	int a2;
	int b1;
	int b2;
	int n;
	do
	{
	do
	{
		printf("Podaj poczatkowa wartosc zbioru a:\n");
		printf ("a1=");
		scanf("%d",&a1);
		printf("Podaj koncowa wartosc zbioru a:\n");
		printf ("a2=");
		scanf("%d",&a2);
		printf("Podaj poczatkowa wartosc zbioru b:\n");
		printf ("b1=");
		scanf("%d",&b1);
		printf("Podaj koncowa wartosc zbioru b:\n");
		printf ("b2=");
		scanf("%d",&b2);
		if(a1>a2 || b1>b2)
		{
			printf("Podano nieprawidlowe wartosci.\nMusza byc spelnione warunki a1<=a2 oraz b1<=b2.\n\n");
		}
	}
	while(a1>a2 || b1>b2);
	if(a1<b1)
	{
		if(a2<b1)
		{
			for(n=a1;n<=a2;n++)
			printf("%d ",n);
			for(n=b1;n<=b2;n++)
			printf("%d ",n);
		}
		else if(a2==b1)
		{
			for(n=a1;n<=b2;n++)
			printf("%d ",n);
		}
		else if(a2>b1)
		{
			if(a2<b2)
			{
				for(n=a1;n<=b2;n++)
				printf("%d ",n);
			}
			else if(a2==b2)
			{
				for(n=a1;n<=a2;n++)
				printf("%d ",n);
			}
			else if(a2>b2)
			{
				for(n=a1;n<=a2;n++)
				printf("%d ",n);
			}
		}
	}
	else if(a1==b1)
	{
		if(a2>b2)
		{
			for(n=a1;n<=a2;n++)
			printf("%d ",n);	
		}
		else if(a2==b2)
		{
			for(n=a1;n<=a2;n++)
			printf("%d ",n);
		}
		else if(a2<b2)
		{
			for(n=a1;n<=b2;n++)
			printf("%d ",n);
		}
	}
	else if(a1>b1)
	{
		if(b2<a1)
		{
			for(n=a1;n<=a2;n++)
			printf("%d ",n);
			for(n=b1;n<=b2;n++)
			printf("%d ",n);	
		}
		else if(b2==a1)
		{
			for(n=b1;n<=a2;n++)
			printf("%d ",n);	
		}
		else if(b2>a1)
		{
			if(b2<a2)
			{
				for(n=b1;n<=a2;n++)
				printf("%d ",n);	
			}
			else if(b2==a2)
			{
				for(n=b1;n<=b2;n++)
				printf("%d ",n);
			}
			else if(b2>a2)
			{
				for(n=b1;n<=b2;n++)
				printf("%d ",n);
			}
		}
	}
	printf("\n\n\n");
	}while(1==1);
	return 0;
}
