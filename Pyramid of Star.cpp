#include<stdio.h>
int main ()
{
	int i,j,rows;
	
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	
	for(i=1; i<=rows; i++){
		
		for(j=i; j<rows ; j++){
			printf("");
		}
		for(j=i; j<(2*i-1); j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
