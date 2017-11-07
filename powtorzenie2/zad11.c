#include <stdio.h>

int prog(float a, float p, float k);

int main(){
	float a,p,k;
	scanf("%f %f %f",&a,&p,&k);
	printf("%d",prog(a,p,k));
	
	return 0;
}

int prog(float a, float p, float k)
{
	int i=0;
	while(a<=k)
	{
	a=a+(a*p);
	i++;
	}
	return i;
}
