#include <stdio.h>

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	x=(x>=0)?x:-1*x;
	y=(y>=0)?y:-1*y;
	printf("%.2f",(x+y)/2.0);
	return 0;
}

