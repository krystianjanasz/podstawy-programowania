#include <stdio.h>
#include <stdlib.h>

void *czyszczator(double *wsk_a)
{
	printf("%f\n",*wsk_a);
//	free(wsk_a);
	wsk_a=NULL;
	printf("%f",*wsk_a);
}

int main(){
	double a=5;
	double *wsk_a=&a;

	czyszczator(wsk_a);
	return 0;
}

