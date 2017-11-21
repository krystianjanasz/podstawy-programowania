#include <stdio.h>
#include <stdbool.h>

bool trojkat(float a, float b, float c)
{
	if(a+b>c && a+c>b && b+c>a) return true;
	else return false;
}

int main(){
	float a,b,c;
	scanf("%f %f %f", &a,&b,&c);
	if(trojkat(a,b,c)) printf("mozna");
	else printf("nie mozna");
	
	return 0;
}

