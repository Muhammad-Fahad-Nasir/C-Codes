#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("ammar.txt","r");
	fscanf(fp,"%c",&ch);
	printf("character = %c",ch);
	fscanf(fp,"%c",&ch);
	printf("\ncharacter = %c",ch);
	fscanf(fp,"%c",&ch);
	printf("\ncharacter = %c",ch);
	fscanf(fp,"%c",&ch);
	printf("\ncharacter = %c",ch);
	fscanf(fp,"%c",&ch);
	printf("\ncharacter = %c",ch);
	return 0;
}
