#include <stdio.h>

void ustawiator(int *wsk_n, int b){
	*wsk_n=*wsk_n|(1<<(b-1));
}

int main(){
	int n;
	int *wsk_n=&n;
	int b;
	scanf("%d %d",&n,&b);
	printf("%d\n",*wsk_n);
	ustawiator(wsk_n,b);
	printf("%d",n);
	return 0;
}
