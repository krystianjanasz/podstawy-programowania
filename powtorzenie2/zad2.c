#include <stdio.h>

int function(int x, int y);

int main(){
	int x=0;
	int y=0;
	scanf("%d %d",&x,&y);
	printf("%d",function(x,y));
	return 0;
}

int function(int x, int y)
{
	if(x==0)
	return y;
	else if(y==0)
	return x;
	else return function(x-1,y)+function(x,y-1);
}

