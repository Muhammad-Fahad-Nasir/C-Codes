#include<stdio.h>
int main(){
	
	int marks[2][4] = {{56, 89, 87, 88},
                   	{67, 44, 33, 22}};
	
	for(int i = 0 ;i < 2 ; i++)
	{
		for(int j = 0;j < 4; j++)
		{
			printf("%d ", marks[i][j]);
		
	} 
	printf("\n");
}
	return 0;
}
