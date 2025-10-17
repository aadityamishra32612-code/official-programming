#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int year, y, days = 0;
    int dayIndex;
    char* daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year < 2001) {
        
        for (y = 2000; y >= year; y--) {
            if (isLeapYear(y))
                days -= 366;
            else
                days -= 365;
        }
    } else {
        
        for (y = 2001; y < year; y++) {
            if (isLeapYear(y))
                days += 366;
            else
                days += 365;
        }
    }

    
    dayIndex = (days % 7 + 7) % 7; 

    printf("The day on 1st January %d is: %s\n", year, daysOfWeek[dayIndex]);

    return 0;
}
