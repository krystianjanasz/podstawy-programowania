#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("Podaj wartosci a i b funkcji y=ax+b.\n");
	printf("Wartosc a=");
	scanf("%d",&a);
	printf("Wartosc b=");
	scanf("%d",&b);
	if(a==0 && b==0)
	{
		printf("Wykres pokrywa sie z osia OX.\n");
	}
	else if(a>0)
	{
		if(b>0)
		{
			printf("Wykres funkcji przechodzi przez I, II i III cwiartke.\n");
		}
		else if(b==0)
		{
			printf("Wykres funkcji przechodzi przez I,III cwiartke.\n");
		}
		else if(b<0)
		{
			printf("Wykres funkcji przechodzi przez I, III i IV cwiartke.\n");	
		}
		
	}
	else if(a==0)
	{
		if(b>0)
		{
			printf("Wykres funkcji przechodzi przez I i II cwiartke.\n");
		}
		else if(b<0)
		{
			printf("Wykres funkcji przechodzi przez III i IV cwiartke.\n");
		}
	}
	else if(a<0)
	{
		if(b>0)
		{
			printf("Wykres funkcji przechodzi przez I, II i IV cwiartke.\n");
		}
		else if(b==0)
		{
			printf("Wykres funkcji przechodzi przez II i IV cwiartke.\n");
		}
		else if(b<0)
		{
			printf("Wykres funkcji przechodzi przez II, III i IV cwiartke.\n");
		}
	}
	return 0;
}
