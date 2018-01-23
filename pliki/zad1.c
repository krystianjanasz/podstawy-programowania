#include <stdio.h>

int main(){
	
	FILE *f;
	f=fopen("plikiplikow/pliczek.txt" ,"r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	char c;
	int i=0;
	while((c=fgetc(f))!=EOF)
	{
		printf("%c",c);
		i++;
	}
	printf("\nliczba znakow to: %d",i);
	fclose(f);
	return 0;
}

