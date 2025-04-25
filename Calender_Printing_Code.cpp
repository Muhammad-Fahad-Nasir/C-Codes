#include <stdio.h>
#include <time.h>

void displayMonthlyCalendar(int inputYear, int inputMonth) {
    int daysPerMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char *monthNames[] = { "January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December" };

    if ((inputYear % 4 == 0 && inputYear % 100 != 0) || (inputYear % 400 == 0)) {
        daysPerMonth[1] = 29;
    }
    printf("  %s %d\n", monthNames[inputMonth - 1], inputYear);
    printf(" Su Mo Tu We Th Fr Sa\n");
   
    struct tm firstDayOfMonth = { 0 };
    firstDayOfMonth.tm_year = inputYear - 1900;
    firstDayOfMonth.tm_mon = inputMonth - 1;
    firstDayOfMonth.tm_mday = 1;
    mktime(&firstDayOfMonth);
    
    int startingDay = firstDayOfMonth.tm_wday;

    for (int i = 0; i < startingDay; i++) {
        printf("   ");
    }
    for (int currentDay = 1; currentDay <= daysPerMonth[inputMonth - 1]; currentDay++) {
        printf("%3d", currentDay);
        if ((startingDay + currentDay) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n\n");
}

void displayYearlyCalendar(int inputYear) {
    for (int currentMonth = 1; currentMonth <= 12; currentMonth++) {
        displayMonthlyCalendar(inputYear, currentMonth);
    }
}
int main() {
    int userYear;
    
     printf("\n\t\t\t*=====Yearly Calendar Generator=====*\n\n");
     
    printf("Please enter a year: ");
    scanf("%d", &userYear);

    displayYearlyCalendar(userYear);
    return 0;
}

