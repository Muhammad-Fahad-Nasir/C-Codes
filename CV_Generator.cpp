#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    char phone[15];
    char email[50];
    char education[100];
    char experience[200];

    printf("============Generate CV By Taking User Input=============\n\n");
    
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your Qualification: ");
    scanf(" %[^\n]", education);

    printf("Enter your work experience: ");
    scanf(" %[^\n]", experience);

    
    printf("\n\n------------ CV Details ----------------\n");
    printf("\tName: \t\t%s\n", name);
    printf("\tAge: \t\t%d\n", age);  
    printf("\tPhone: \t\t%s\n", phone);
    printf("\tEmail: \t\t%s\n", email);
    printf("\tEducation: \t%s\n", education);
    printf("\tExperience: \t%s\n", experience);
    printf("----------------------------------------\n");

    return 0;
}

