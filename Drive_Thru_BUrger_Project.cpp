#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{   // structure which store customer information..
	char name[50],number[50];

};
void menu(); //prototype..


int main(){
	
	menu();

	
	return 0;
}
void menu(){	//menu screen
	
  	int ch, price;
	int order[50];
	

    printf("\n\n\t\t==========================================\n");
    printf("\t\tWELCOME TO DRIVE THRU BURGER RESTAURENT!!!!\n");
    printf("\t\t==========================================\n\n");
    
    	struct data a1;
		
	printf("Your Name : ");
	scanf(" %s",a1.name);
	
	printf("Your Phone Number : ");
	scanf(" %s",a1.number);
	
//	printf("\nNAME : %s",a1.name);
//	printf("\nPhone number : %s",a1.number);
	
    printf("\t\t\t\t  MENU\n");
    printf("==================================================================\n");
    printf("Flavours\t\t\t\t\t\tPrice\n");
    printf("==================================================================\n");
    printf("1.  Philly Cheese Steak Pizza \t\t\t\t2500\n");
    printf("2.  Ultimate Pepperoni Pizza \t\t\t\t2500\n");
    printf("3.  Chicken Taco Pizza \t\t\t\t\t3500\n");
    printf("4.  MeatZZa Pizza \t\t\t\t\t2000\n");
    printf("5.  Spinach & Feta Pizza \t\t\t\t2700\n");
    printf("6.  Wisconsin 6 Cheese Pizza \t\t\t\t3600\n");
    printf("7.  Cheeseburger Pizza \t\t\t\t\t2200\n");
    printf("8.  Chiken Fajita Pizza \t\t\t\t3200\n");
    printf("9.  Malai Boti Pizza \t\t\t\t\t2500\n");
    printf("10. BBQ Pizza \t\t\t\t\t\t3100\n\n");
    

    
    printf("How Many Items Do You want to Order?? ");
    scanf("%d",&ch);
    for(int i=0;i<ch;i++){
        printf("Enter your %d Order\n",i+1);
        scanf("%d",&order[i]);
    }
    int total_price = 0;
    printf("\n\n\t\t==========================================\n");
    printf("\t\t\tDrive thru Pizza Restaurent\n");
    printf("\t\t==========================================\n");
    
    printf("\nNAME : %s",a1.name);
	printf("\nPhone number : %s\n",a1.number);
    
    printf("\nFlavours\t\t\t\t\t\tPrice\n");
    printf("============================================================\n");
    
    for(int i=0;i<ch;i++){
        if (order[i] == 1) {
            price = 2500;
            printf("Philly Cheese Steak Pizza\t\t\t\t%d\n",price);
        }
        else if (order[i] == 2) {
            price = 2500;
            printf("Ultimate Pepperoni Pizza\t\t\t\t%d\n",price);
        }
        else if (order[i] == 3) {
            price = 3500;
            printf("Chicken Taco Pizza\t\t\t\t\t%d\n",price);
        }
        else if (order[i] == 4) {
            price = 2000;
			printf("MeatZZa Pizza\t\t\t\t\t\t%d\n",price);
	    }
	    else if (order[i] == 5) {
            price = 2700;
			printf("Spinach & Feta Pizza\t\t\t\t\t%d\n",price);
	    }
	    else if (order[i] == 6) {
            price = 3600;
			printf("Wisconsin 6 Cheese Pizza\t\t\t\t%d\n",price);
	    }
	    else if (order[i] == 7) {
            price = 2200;
			printf("Cheese burger Pizza\t\t\t\t\t%d\n",price);
	    }
	    else if (order[i] == 8) {
            price = 3200;
			printf("Chicken Fajita Pizza\t\t\t\t\t%d\n",price);
	    }
	    else if (order[i] == 9) {
            price = 2500;
			printf("Malai Boti Pizza\t\t\t\t\t%d\n",price);
	    }
	    else if (order[i] == 10) {
            price = 3100;
			printf("BBQ Pizza\t\t\t\t\t\t%d\n",price);
	    }
	    total_price += price;
}

printf("\nTotal Price: \t\t\t\t\t\t%d\n", total_price);
printf("============================================================\n");
printf("\nThank you for choosing our restaurant! Enjoy your meal!\n");
}
