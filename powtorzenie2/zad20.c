#include <stdio.h>

unsigned funkcja(int x,int y);

int main(){
	unsigned int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",funkcja(x,y));
	return 0;
}

unsigned funkcja(int x, int y)
{
	if (x==y) return x;
	else if(x>y)
	{
		return 2*funkcja((y/x),y);
	}
	else
	{
		return 2*funkcja(x,(x/y));
	}
}

