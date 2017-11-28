#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	float *tab=(float*)malloc(n*sizeof(float));
	int i;
	for(i=0;i<n;i++){
		scanf("%f", tab+i);
	}
	float max;

	for(i=0;i<n;i++){
		printf("%f\n",*(tab+i));
	}
	for(i=0;i<n;i++){
		if(i==0)	max=*tab;
		else if(max<*(tab+i)) max=*(tab+i);
	}
	float min;
	for(i=0;i<n;i++){
		if(i==0)	min=*(tab+i);
		else if(min>*(tab+i)) min=*(tab+i);
	}
	float srednia=0;
	for(i=0;i<=n;i++){
		srednia+=*(tab+i);
		if(i==n) srednia/=n;
	}
	float suma=0;
	for(i=0;i<=n;i++){
		suma+=*(tab+i);
	}
	printf("MAX:%.2f\n",max);
	printf("MIN:%.2f\n",min);
	printf("SREDNIA:%.2f\n",srednia);	
	printf("SUMA:%.2f",suma);
	free(tab);
	return 0;
}

