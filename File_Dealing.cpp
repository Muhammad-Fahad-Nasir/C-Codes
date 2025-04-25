#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr = NULL;
	char string[65];"Muhammad Fahad";
	ptr= fopen("myfile.txt","w");
	fprintf(ptr,"%s",string);
	
	//fclose (fptr);
	
	
	
	return 0;
}
