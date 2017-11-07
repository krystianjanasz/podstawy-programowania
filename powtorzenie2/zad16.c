#include <stdio.h>
#include <math.h>

int main(){
	float x,y;
	scanf("%f %f",&x,&y);
	float r=sqrt((x*x)+(y*y));
	float cos=x/r;
	printf(".2%f",cos);
	return 0;
}

