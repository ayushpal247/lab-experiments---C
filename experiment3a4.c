/*According to the gregorian calendar, it was Monday on the date 01/01/01. 
If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include <stdio.h>
    
int main() {   
    int year, y, leaps, day;

    printf("Enter year: ");
    scanf("%d", &year);

    y = year - 1;                          // years passed before current year
    leaps = y/4 - y/100 + y/400;           // leap years till previous year
    day = (y + leaps) % 7;                 // total shifts % 7

    printf("1st January %d is ", year);

    if(day == 0)
        printf("Monday");
    else if(day == 1)
        printf("Tuesday");
    else if(day == 2)
        printf("Wednesday");
    else if(day == 3)
        printf("Thursday");
    else if(day == 4)
        printf("Friday");
    else if(day == 5)
        printf("Saturday");
    else
        printf("Sunday");

    return 0;
}


