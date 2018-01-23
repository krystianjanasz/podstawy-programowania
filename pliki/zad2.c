#include <stdio.h>

int main(){
	
	FILE *f;
	f=fopen("plikiplikow/tabliczka.txt" ,"w");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	int i;
	int j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			fprintf(f,"%3.d ",i*j);
		}
		fprintf(f,"\n");
	}
	fclose(f);
	return 0;
}

