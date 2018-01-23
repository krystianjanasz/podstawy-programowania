#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct zespolona{
	float re;
	float im;
}zespolona;

float modul(zespolona *wsk_z1){
	return sqrt((wsk_z1->re*wsk_z1->re)+(wsk_z1->im*wsk_z1->im));
}

void suma(zespolona *wsk_z1, zespolona *wsk_z2){
	printf("%.2f + %.2fi\n",wsk_z1->re+wsk_z2->re,wsk_z1->im+wsk_z2->im);
}

void iloczyn(zespolona *wsk_z1,zespolona *wsk_z2){
	printf("%.2f + %.2fi\n",wsk_z1->re*wsk_z2->re-wsk_z1->im*wsk_z2->im,
	wsk_z1->re*wsk_z2->im+wsk_z2->re*wsk_z1->im);
}

int main(){
	zespolona z1;
	zespolona z2;
	zespolona *wsk_z1=&z1;
	zespolona *wsk_z2=&z2;
	printf("pierwsza liczba zespolona:\n");
	scanf("%f %f",&z1.re,&z1.im);
	printf("jej modul = %.2f\n",modul(wsk_z1));
	printf("druga liczba zespolona:\n");
	scanf("%f %f",&z2.re,&z2.im);
	suma(wsk_z1,wsk_z2);
	iloczyn(wsk_z1,wsk_z2);
	return 0;
}

