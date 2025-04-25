#include<stdio.h>
 
 int main ()
 {
     int num1,num2;
     int mid_point = 0;
     int distance = 0;
     
    printf("Enter a num1 :");
    scanf("%d",&num1);
    
    printf("Enter a num2 :");
    scanf("%d",&num2);

    mid_point = (num1 + num2) / 2;
    
    printf("\nMid point of %d and %d is : %d.", num1, num2, mid_point);
    
    
    distance = num2 - num1;
    printf("\n\nDistance of %d and %d is : %d.", num1, num2, distance);

    
   
    return 0 ; 
}
