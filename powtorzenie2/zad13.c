#include <stdio.h>

int main(){
	int n;
	n=0;
	int wynik;
	wynik=0;
	while(wynik<=100)
	{
		scanf("%d",&n);
		wynik=wynik+n;
	}
	printf("%d",wynik-100);
	return 0;
}

