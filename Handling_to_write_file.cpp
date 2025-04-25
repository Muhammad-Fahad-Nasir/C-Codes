#include<stdlib.h>
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("ammar.txt","w");
	fscanf(fp,"%c",&ch);
	fprintf(fp,"%c",'M');
		fscanf(fp,"%c",&ch);
	fprintf(fp,"%c",'A');
		fscanf(fp,"%c",&ch);
	fprintf(fp,"%c",'N');
	
	fclose(fp);
	return 0;
}
