
#include<stdio.h>
#include<conio.h>

int main() {

	int length = 0, breadth = 0;
	
	printf("\nEnter the Length of a Rectangle : ");
	scanf("%d", &length);
	
	printf("\nEnter the Breadth of a Rectangle : ");
	scanf("%d", &breadth);
	
	
	float area = 0;
	area = length * breadth;
	
	float perimeter = 0;
	perimeter = 2 * (length + breadth);
	
	if(area > perimeter) {
		printf("\nArea is greater than Perimeter.");
	} else if (area == perimeter) {
		printf("\nBoth Area and Perimeter are Equal");
	} 
	else {
		printf("\nPerimeter is greater than Area.");
	}
	return 0;
}

