#include <stdio.h>

int dziel_p_2(int l){
	return l>>1;
}

int main(){
	int l;
	scanf("%d",&l);
	int l_podz=(dziel_p_2(l));
	printf("%d",l_podz);
	return 0;
}

