#include <stdio.h>

int main(){
	float tab[5];
	int i;
	float suma=0;
	for(i=0;i<5;i++)
	{
		scanf("%f",&tab[i]);
		suma+=tab[i];
	}
	printf("%.2f\n",suma);
	printf("%.2f\n",suma/5.0);
	return 0;
}

