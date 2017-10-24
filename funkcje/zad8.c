#include <stdio.h>

int silnia();

int main(){
	int n;
	printf("Silnia:\n");
	printf("Podaj n.\n");
	scanf("%d",&n);	
	printf("Silnia wynosi %d.\n",silnia(n));
	
	return 0;
}

int silnia(int n)
{
	if(n==0)	return 1;
	else	return n*silnia(n-1);
}
