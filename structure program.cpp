#include<stdio.h>
#include<string.h>
struct employe{
	int id;
	char name[50];
	float salary;
};
int main() 
{
 struct employe e1,e2;
     e1.id=456;
	 e2.id=666;
	 strcpy(e1.name,"Harry Potter");
	 strcpy(e2.name,"Johann");
	 e1.salary=50000;
	 e2.salary=60000;
	 
	 printf("e1.id is : %d\n",e1.id);
	  printf("e2.id is : %d\n",e2.id);
	 printf("The name of 1st employe is : %s\n",e1.name);
	  printf("The name of 2nd employe is : %s\n",e2.name);
	   printf("e1.salary is : %.f\n",e1.salary);
	    printf("e2.salary is : %.f\n",e2.salary);
	    return 0;
	  
}
