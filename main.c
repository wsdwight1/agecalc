#include <stdio.h>
#include "getdouble.h"


double getAge(double day, double month, double year, double currDay, double currMonth, double currYear);

#define ONE_YEAR 365.25
#define MONTHS_PER_YEAR 12.0

int main() {
    double day;
    double month;
    double year;
    double currDay = 24.0;
    double currMonth = 2.0;
    double currYear = 2023.0;
    puts("This program will calculate your age in days.");
    printf("Enter the month you were born:");
    month = getdouble();
    printf("Enter the day you were born: ");
    day = getdouble();
    printf("Enter the year you were born: ");
    year = getdouble();
    printf("Birthday: %d", (int) month);
    printf("/%d", (int) day);
    printf("/%d\n", (int) year);

    printf("Current Date: %d", (int) currMonth);
    printf("/%d", (int) currDay);
    printf("/%d\n", (int) currYear);

    double age = getAge(day, month, year, currDay, currMonth, currYear);
    printf("Your age: %d", (int) age);

    return 0;
}

double getAge(double day, double month, double year, double currDay, double currMonth, double currYear) {
    double numDaysCurr = (currYear * ONE_YEAR) + ((currMonth - 1) * ONE_YEAR / MONTHS_PER_YEAR) + currDay;
    double numDaysBirth = (year * ONE_YEAR) + ((month - 1) * ONE_YEAR / MONTHS_PER_YEAR) + day;
    double ageInDays = numDaysCurr - numDaysBirth;
    return ageInDays;
}
