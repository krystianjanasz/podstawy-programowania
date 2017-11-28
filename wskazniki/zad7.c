#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int tab1[n];
	int tab2[n];
	int tab3[n];
	int *wsk_tab1=&tab1[0];
	int *wsk_tab2=&tab2[0];
	int *wsk_tab3=&tab3[0];
	int *tab4=(int*)malloc(n*sizeof(int));
	int i;
	printf("TABLICA 1:\n");
	for(i=0;i<n;i++){
		scanf("%d", tab1+i);
	}
	printf("TABLICA 2:\n");
	for(i=0;i<n;i++){
		scanf("%d", tab2+i);
	}
	printf("TABLICA 3:\n");
	for(i=0;i<n;i++){
		scanf("%d", tab3+i);
	}
	for(i=0;i<n;i++){
		if(*(wsk_tab1+i)>=0) tab4[i]=*(wsk_tab2+i);
		else tab4[i]=*(wsk_tab3+i);
	}
	printf("TABLICA 4:\n");
	for(i=0;i<n;i++){
		printf("%d ", *(tab4+i));
	}
	
	return 0;
}

