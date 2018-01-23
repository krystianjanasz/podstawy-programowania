#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct trojkat{
	int ax;
	int ay;
	int bx;
	int by;
	int cx;
	int cy;
}trojkat;

float obwod(trojkat wspolrzedne){
	float odcinek_ab=sqrt((wspolrzedne.bx-wspolrzedne.ax)*(wspolrzedne.bx-wspolrzedne.ax)
	+(wspolrzedne.by-wspolrzedne.ay)*(wspolrzedne.by-wspolrzedne.ay));
	
	float odcinek_bc=sqrt((wspolrzedne.bx-wspolrzedne.cx)*(wspolrzedne.bx-wspolrzedne.cx)
	+(wspolrzedne.by-wspolrzedne.cy)*(wspolrzedne.by-wspolrzedne.cy));
	
	float odcinek_ac=sqrt((wspolrzedne.cx-wspolrzedne.ax)*(wspolrzedne.cx-wspolrzedne.ax)
	+(wspolrzedne.cy-wspolrzedne.ay)*(wspolrzedne.cy-wspolrzedne.ay));
	
	return odcinek_ab+odcinek_ac+odcinek_bc;
}

int main(){
	trojkat wspolrzedne;
	printf("wspolrzedne a:\n");
	scanf("%d %d",&wspolrzedne.ax,&wspolrzedne.ay);
	printf("wspolrzedne b:\n");
	scanf("%d %d",&wspolrzedne.bx,&wspolrzedne.by);
	printf("wspolrzedne c:\n");
	scanf("%d %d",&wspolrzedne.cx,&wspolrzedne.cy);
	printf("%.2f",obwod(wspolrzedne));
	return 0;
}

