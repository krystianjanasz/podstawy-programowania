#include <stdio.h>

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	char wynik=(a*a+b*b==c*c)?'t':(a*a+c*c==b*b)?'t':(b*b+c*c==a*a)?'t':'n';
	printf("%c",wynik);
	return 0;
}

