#include <stdio.h>

int potega2(int b){
	return 1<<(b);
}

int main(){
	int b;
	scanf("%d",&b);
	int wynik=potega2(b);
	printf("%d",wynik);
	return 0;
}

