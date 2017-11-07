#include <stdio.h>
#include <math.h>
int pierw3(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",pierw3(n));
	return 0;
}

int pierw3(int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(i*i*i==n)	return i;
		else if(i*i*i>n)	return i-1;
	}
}

