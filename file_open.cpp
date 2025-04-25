#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("ammar.txt","r");
	if(fp==NULL){
	
	printf("File does not exit");
}
else{
	fclose(fp);
}
			
	return 0;
}
