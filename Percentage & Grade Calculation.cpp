#include<stdio.h>
#include<conio.h>

void calculate_division(int sum) {
	
	printf("\nSum is : %d", sum);
	
	int percentage = 0;
	
	percentage = (sum  * 100) / 500;
	
	printf("\nPercentage is : %d ", percentage);
	
	if(percentage >= 60) {
		printf("\nGrade is : A.");
	} 
	else if(percentage >= 50 && percentage < 60){
		printf("\nGrade is : B.");
	}
	else if(percentage >= 40 && percentage <= 50) {
		printf("\nGrade is : C.");
	}
	else {
		printf("\nGrade is : Fail.");
	}
}
int main() {
	
		int subject1, subject2, subject3, subject4, subject5;
		int sum_of_all_numbers = 0;
		
		printf("\nEnter the number for subject 1 : ");
		scanf("%d", &subject1);
				
		printf("\nEnter the number for subject 2 : ");
		scanf("%d", &subject2);
		
		printf("\nEnter the number for subject 3 : ");
		scanf("%d", &subject3);
		
		printf("\nEnter the number for subject 4 : ");
		scanf("%d", &subject4);
		
		printf("\nEnter the number for subject 5 : ");
		scanf("%d", &subject5);
		
		sum_of_all_numbers = subject1 + subject2 + subject3 + subject4 + subject5;
calculate_division(sum_of_all_numbers);
	           getch();
		return 0;
}

