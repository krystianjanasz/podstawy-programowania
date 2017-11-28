#include <stdio.h>
#include <stdlib.h>

float *rezerwator()
{
	float *a=(float*) malloc(sizeof *a);
	return a;
}

int main(){
	printf("%d\n",rezerwator());
	return 0;
}

