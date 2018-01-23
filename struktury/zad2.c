#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct punkt{
	int x;
	int y;
	int z;
}punkt;

float odleglosc(punkt punkt1,punkt punkt2){
	return sqrt((punkt2.x-punkt1.x)*(punkt2.x-punkt1.x)
	+(punkt2.y-punkt1.y)*(punkt2.y-punkt1.y)
	+(punkt2.x-punkt1.z)*(punkt2.x-punkt1.z));
}

int main(){
	punkt punkt1;
	punkt punkt2;
	printf("wspolrzedne pierwszego punktu:\n");
	scanf("%d %d %d",&punkt1.x,&punkt1.y,&punkt1.z);
	printf("wspolrzedne drugiego punktu:\n");
	scanf("%d %d %d",&punkt2.x,&punkt2.y,&punkt2.z);
	printf("%f",odleglosc(punkt1,punkt2));
	return 0;
}

