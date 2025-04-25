#include<stdio.h>
#include<conio.h>
 
 int main ()
 {
int lower_limit = 1; 
	int upper_limit = 100;
	int sum  = 0;
	for(int i = lower_limit; i <= upper_limit; i++) {

		if(i%2 == 0) {
			sum  = sum + i;
		}
	}
	printf("Sum is : %d", sum);
	return 0;
	
}
	
	
