#include <stdio.h>

int main(){
	FILE *f;
	f=fopen("plikiplikow/ztego.txt" ,"r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}

	FILE *fw;
	fw=fopen("plikiplikow/dotego.txt" ,"w");
	if(!fw)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	
	char c;
	while((c=fgetc(f))!=EOF)
	{
		fprintf(fw,"%c",c);
	}
	
	fclose(f);
	fclose(fw);
	return 0;
}

