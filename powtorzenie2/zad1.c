#include <stdio.h>
int pierw(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",pierw(n));
	return 0;
}

int pierw(int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(i*i==n)	return i;
		else if(i*i>n)	return i-1;
	}
}

