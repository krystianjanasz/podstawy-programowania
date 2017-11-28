#include <stdio.h>

void *max_wsk(int *wsk1, int *wsk2)
{
	if(wsk1>wsk2)
	{
		printf("%d\n",wsk1);
	}
	else
	{
		printf("%d\n",wsk2);
	}
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int *wsk1=&a;
	int *wsk2=&b;
	printf("%d\n",wsk1);
	max_wsk(wsk1,wsk2);
	return 0;
}

