#include <stdio.h>

int pole();

int main(){
	int a;
	int h;
	
	printf("Pole trojkata:\n");
	printf("Podaj a.\n");
	scanf("%d",&a);
	printf("Podaj h.\n");
	scanf("%d",&h);
	
	printf("Pole wynosi %d.\n",pole(a,h));
	
	return 0;
}

int pole(int a,int h)
{
	return (a*h)/2;
}

