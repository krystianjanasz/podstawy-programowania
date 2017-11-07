#include <stdio.h>
#include <math.h>

float odleglosc(int x1, int x2, int y1, int y2);

int main(){
	int x1;
	int x2;
	int y1;
	int y2;
	x1,x2,y1,y2=0;
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	float wynik;
	wynik=odleglosc(x1,x2,y1,y2);
	printf("%.2f",wynik);
	return 0;
}

float odleglosc(int x1, int x2, int y1, int y2)
{
	return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
