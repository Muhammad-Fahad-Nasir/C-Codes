#include <stdio.h>
#include <stdlib.h>


void showMenu();
void admitPatient();
void dischargePatient();
void viewPatients();
void exitProgram();


int patientCount = 0;

struct Patient {
    int id;
    char name[50];
    int age;
};


struct Patient patients[100];

int main() {
    int choice;

    do {
        showMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                admitPatient();
                break;
            case 2:
                dischargePatient();
                break;
            case 3:
                viewPatients();
                break;
            case 4:
                exitProgram();
                break;
            default:
                printf("Invalid choice. Please try again.");
        }
    } while (choice != 4);

    return 0;
}

void showMenu() {
    printf("\n==============================Hospital Reception System=========================\n");
    printf("\n1. Admit Patient");
    printf("\n2. Discharge Patient");
    printf("\n3. View Patients");
    printf("\n4. Exit\n");
}

void admitPatient() {
    if (patientCount < 100) {
        printf("\nEnter patient name: ");
        scanf("%s", patients[patientCount].name);

        printf("\nEnter patient age: ");
        scanf("%d", &patients[patientCount].age);

        patients[patientCount].id = patientCount + 1;
        patientCount++;

        printf("\nPatient admitted successfully.\n");
         printf("\n\n==========================THANK YOU FOR CHOOSING US================================\n\n");
    } else {
        printf("\nHospital is full. Cannot admit more patients.");
    }
}

void dischargePatient() {
    int id;
    printf("\nEnter patient ID to discharge: ");
    scanf("%d", &id);

    if (id > 0 && id <= patientCount) {
        printf("\nPatient %s discharged.", patients[id - 1].name);
        for (int i = id - 1; i < patientCount - 1; i++) {
            patients[i] = patients[i + 1];
        }
        patientCount--;
    } else {
        printf("\n\t\t***************Invalid patient ID*********************");
    }
    printf("\n\n==========================THANK YOU FOR CHOOSING US================================\n\n");
}

void viewPatients() {
    printf("Patient ID\tName\t\tAge\n");
    printf("\n\n--------------------------------\n");
    for (int i = 0; i < patientCount; i++) {
        printf("%d\t\t%s\t\t%d\n", patients[i].id, patients[i].name, patients[i].age);
    }
}
        
void exitProgram() {
    printf("\nExiting the program.\n");
    exit(0);
    
}
