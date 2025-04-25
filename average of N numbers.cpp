#include<stdio.h>
int main()
{
	int n,i=1,num,sum=0,avg;
	printf("Enter the Number Limit :");
	scanf("%d",&n);
	do{
		printf("\nEnter the number:");
		scanf("%d",&num);
		sum= sum + num;
		i++;
	}while(i<=n);
	
	avg= sum/n;
	printf("THE AVERAGE OF N NUMBER IS : %d",avg);
	return 0;
}
