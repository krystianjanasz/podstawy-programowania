#include <stdio.h>

void czy_potega(int a){
	if(a&(a-1)) printf("nie jest potega dwojki");
	else printf("jest potega dwojki");
}

int main(){
	int a;
	scanf("%d",&a);
	int b=(a&(a-1));
	printf("%d\n",b);
	czy_potega(a);
	return 0;
}

