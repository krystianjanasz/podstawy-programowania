#include <stdio.h>

int reszta(float a,float b);


int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	printf("%d",reszta(a,b));

	return 0;
}

int reszta(float a,float b)
{
	int a_int=(int)a;
	int b_int=(int)b;	
	float reszta_a=a-a_int;
	float reszta_b=b-b_int;
	if(reszta_a==reszta_b)
	{
		return 1;
	}else return 0;
}

