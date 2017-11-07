#include <stdio.h>
#include <math.h>

int main(){
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	float bok1=sqrt((y2-y1)*(y2-y1));
	float bok2=sqrt((x2-x1)*(x2-x1));
	printf("%.2f",bok1*bok2);
	return 0;
}

