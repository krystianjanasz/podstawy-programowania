#include <stdio.h>

void parzysta(int a){
	if(a&1==1)
	printf("nieparzysta");
	else
	printf("parzysta");
}

int main(){
	int a;
	scanf("%d",&a);
	parzysta(a);
	return 0;
}

