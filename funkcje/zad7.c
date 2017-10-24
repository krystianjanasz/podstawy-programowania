#include <stdio.h>

int ciag();//cing

int main(){
	int n;

	printf("Wartosc ciagu:\n");
	printf("Podaj n.\n");
	scanf("%d",&n);
	printf("Wartosc wynosi %d.\n",ciag(n));
	
	return 0;
}

int ciag(int n)
{
	if(n<=0 || n==10)	return 0;
	else return 2*ciag(n-1)+ciag(n-2)+5;
}
