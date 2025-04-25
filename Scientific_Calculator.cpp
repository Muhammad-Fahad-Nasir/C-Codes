#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
	int choice,i,a,b;
	float x,y,result;
	    printf ("\n=========================Scientific_Calculator===============================\n");
		printf ("\nSelect your operation From the Following(0 to exit):\n");
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n");
		printf("5.Square root\n6.X^Y\n7.X^2\n8.X^3\n");
		printf("9.1/X\n10.X^(1/Y)\n11.X^(1/3)\n");
		printf("12.10^X\n13.X!\n14.Percentage\n15.log10(X)\n16.Modulus\n");
		printf("17.Sin(X)\n18.Cos(X)\n19.Tan(X)\n");
		printf("20.Cosec(X)\n21.Cot(X)\n22.Sec(X)\n");
		
				printf("choice = ");
		scanf("%d",&choice);
		if(choice==0) ("exit 0");
		 if(choice==1){
		 	printf("Enter X:");
				scanf("%f",&x);
				printf("Enter Y:");
				scanf("%f",&y);
				result=x+y;
				printf("\nresult:%f",result);
			}
		else if(choice==2){
				printf("Enter X:");
				scanf("%f",&x);
				printf("Enter Y:");
				scanf("%f",&y);
				result=x-y;
				printf("\nresult:%f",result);
		}
			else if(choice==3){
				printf("Enter X:");
				scanf("%f",&x);
				printf("Enter Y:");
				scanf("%f",&y);
				result=x*y;
				printf("\nresult:%f",result);
			}
			else if(choice==4){
				printf("Enter X:");
				scanf("%f",&x);
				printf("Enter Y:");
				scanf("%f",&y);
				result=x/y;
			    	printf("\nresult:%f",result);
			}
			else if(choice==5){
				printf("Enter X:");
				scanf("%f",&x);
				result=sqrt(x);
				printf("\nresult:%f",result);
			}
			else if(choice==6)
			{
				printf("Enter X:");
				scanf("%f",&x);
				printf("Enter Y:");
				scanf("%f",&y);
				result=pow(x,y);
				printf("\nresult:%f",result);
			}
			else if(choice==7)
			{
				printf("Enter X:");
				scanf("%f",&x);
				result=pow(x,2);
				printf("\nresult:%f",result);
		}
			else if(choice==8)
			{
				printf("Enter X:");
				scanf("%f",&x);
				result=pow(x,3);
				printf("\nresult:%f",result);
			}
			else if(choice==9)
			{
					printf("Enter X:");
				scanf("%f",&x);
				result=pow(x,-1);
				printf("\nresult:%f",result);
			}
			else if(choice==10)
			{
					printf("Enter X:");
				scanf("%f",&x);
					printf("Enter Y:");
				scanf("%f",&y);
					result=pow(x,(1/y));
				printf("\nresult:%f",result);
			}
			else if(choice==11)
			{
					printf("Enter X:");
				scanf("%f",&x);
				y=3;
				result=pow(x,(1/y));
				printf("\nresult:%f",result);
			}
			else if(choice==12)
			{
				printf("Enter X:");
				scanf("%f",&x);
				y=3;
				result=pow(10,x);
				printf("\nresult:%f",result);
			}
			else if(choice==13)
			{
				printf("Enter X:");
				scanf("%f",&x);
				result=1;
				for(i=1;i<=x;i++)
				{
				result=result*i;
			}
				printf("\nresult:%.f",result);
			}
		    else if(choice==14)
			{
					printf("Enter X:");
				scanf("%f",&x);
					printf("Enter Y:");
				scanf("%f",&y);
					result=(x*y)/100;
				printf("\nresult:%.2f",result);
			}
	        else if(choice==15) 
			{
				printf("Enter X:");
				scanf("%f",&x);
				result=log10(x);
				printf("\nresult:%f",result);
			}
			else if(choice==16)
			{
					printf("Enter X:");
				scanf("%d",&a);
					printf("Enter Y:");
				scanf("%d",&b);
					result=a%b;
				printf("\nresult:%d",result);
			}
			else if(choice==17)
			{
					printf("Enter X:");
				scanf("%f",&x);
				result=sin(x*3.14159/180);
				printf("\nresult:%.f",result);
			}
		    else if(choice==18)
			{
		    		printf("Enter X:");
				scanf("%f",&x);
				result=cos(x*3.14159/180);
				printf("\nresult:%.f",result);
			}
			else if(choice==19) 
			{
					printf("Enter X:");
				scanf("%f",&x);
				result=tan(x*3.14159/180);
				printf("\nresult:%.2",result);
			}
		    else if(choice==20)
		    {
		    		printf("Enter X:");
				scanf("%f",&x);
				result= 1/sin(x*3.14159/180);
				printf("\nresult:%.f",result);
			}
			else if(choice==21)
			 {
					printf("Enter X:");
				scanf("%f",&x);
				result=1/tan(x*3.14159/180);
				printf("\nresult:%.f",result);
			}
			else if(choice==22)
			{
					printf("Enter X:");
				scanf("%f",&x);
				result=1/cos(x*3.14159/180);
				printf("\nresult:%.f",result);
			}
				
			else{
			
				printf("\nInvalid Choice!\n");
				}
		

	return 0;
		
}
