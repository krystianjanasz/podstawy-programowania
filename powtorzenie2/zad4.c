#include <stdio.h>
int max(int x, int y);
int min(int x, int y);

int main(){
	int x;
	int y;
	x=0;
	y=0;
	scanf("%d %d",&x,&y);
	printf("%d",min(x,y));
	return 0;
}

int max(int x, int y)
{
	if(x>y)return x;
	else return y;
}

int min(int x, int y)
{
	return x+y-max(x,y);
}

