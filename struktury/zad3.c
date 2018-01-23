#include <stdio.h>
#include <stdlib.h>

typedef struct wektor{
	int x;
	int y;
}wektor;

void zwrot(wektor *wsk){
	wsk->x=-1*wsk->x;
	wsk->y=-1*wsk->y;
}

int main(){
	wektor wektor1;
	wektor *wsk=&wektor1;
	scanf("%d %d",&wektor1.x,&wektor1.y);
	printf("%d %d\n",wektor1.x,wektor1.y);
	zwrot(wsk);
	printf("%d %d",wektor1.x,wektor1.y);
	return 0;
}

