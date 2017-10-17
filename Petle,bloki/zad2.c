#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
	printf("Podaj parametry a,b,c funkji kwadratowej:\n");
	scanf("%f %f %f",&a,&b,&c);
	float delta=(b*b)-(4.0*a*c);
	if(a==0)
	{
		printf("funkcja nie jest kwadratowa.\n");
	}
	else if(a!=0)
	{
		if(delta<0)
		{
			printf("Funkcja nie ma pierwiastkow rzeczywistych.\n");
		}
		else if(delta==0)
		{
			float x=(-1.0*b)/(2.0*a);
			printf("Funkcja posiada jeden pierwiastek i wynosi on %.2f",x);
		}
		else if(delta>0)
		{
			float x1=((-1.0*b)-sqrt(delta))/(2.0*a);
			float x2=((-1.0*b)+sqrt(delta))/(2.0*a);
			printf("Funkcja posiada dwa pierwiastki rzeczywiste, wynosza one x1=%.2f oraz x2=%.2f.\n",x1,x2);
		}
	}
return 0;
}
