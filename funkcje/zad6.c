#include <stdio.h>

int kwadrat();

int main(){
	int n;

	
	printf("2 do potegi n:\n");
	printf("Podaj n.\n");
	scanf("%d",&n);
	printf("Kwadrat 2 do %d wynosi %d.\n",n,kwadrat(n));
	
	return 0;
}

int kwadrat(int n)
{
	if(n==0)	return 1;
	else	return 2*kwadrat(n-1);
}
