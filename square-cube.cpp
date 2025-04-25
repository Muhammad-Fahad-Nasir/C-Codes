#include<stdio.h>
int main()
{
   int Number,Square,Cube;
    printf("Number\tSquare\tCube");
    for( Number=1;Number<=10;Number++)
    {
    	Square = Number*Number;
    	Cube=Number*Number*Number;
    	printf("\n%d\t%d\t%d",Number,Square,Cube);
	}
	return 0;
}
