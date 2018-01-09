#include <stdio.h>

void isset(int n, int b){
	if(n&(1<<(b-1)))
		printf("bit ustawiony");
	else
		printf("bit nie ustawiony");
}

int main(){
	int n;
	int b;
	scanf("%d %d",&n,&b);
	isset(n,b);
	return 0;
}

