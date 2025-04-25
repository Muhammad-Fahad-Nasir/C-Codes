#include<stdio.h>
int main()
{
	float r;
	
	printf("Enter the Radius =");
	scanf("%f",&r);
	
	printf("\nThe Area of the circle is : %.1f",3.14*r*r);
	printf("\nThe diameter of the circle is : %.1f",2*r);
	
	return 0;
}
