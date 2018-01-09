#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
/*
Write a program that prompts the user to enter the day, month, and year. The month can
be a month number, a month name, or a month abbreviation. The program then should
return the total number of days in the year up through the given day.
*/
#define MAXNAME 10       // length of month names
#define MAXABBREV 4
#define YEAR 12         // year in months

struct month {char name[MAXNAME];
        char abbrev[MAXABBREV];
        int numDays;
        char number[2];
};

struct month monthList[YEAR] = {
    {
        "January",
        "Jan",
        31,
        "1"
    },
    {
        "February",
        "Feb",
        28,
        "2"
    },
    {
        "March",
        "Mar",
        31,
        "3"
    },
    {
        "April",
        "Apr",
        30,
        "4"
    },
    {
        "May",
        "May",
        31,
        "5"
    },
    {
        "June",
        "Jun",
        30,
        "6"
    },
    {
        "July",
        "Jul",
        31,
        "7"
    },
    {
        "August",
        "Aug",
        31,
        "8"
    },
    {
        "September",
        "Sep",
        30,
        "9"
    },
    {
        "October",
        "Oct",
        31,
        "10"
    },
    {
        "November",
        "Nov",
        30,
        "11"
    },
    {
        "December",
        "Dec",
        31,
        "12"
    }
};     

int GetMonthNumber(char[MAXNAME]);
int CountDays(int month);

int main(void)
{
    char month[MAXNAME];
    char abbrev[MAXABBREV];
    char day[2];
    char yr[4];
    int index = 0;
    int monthInput = 0;
    int dayInput = 0;
    int yearInput = 0;
    int countofDays = 0;
    struct month thisMonth;

    printf("Enter the day:\n");
    scanf("%s", day);
    if(isdigit(*day))
        dayInput = atoi(day);
  
    printf("\nEnter the month: (can be a number, name or abbreviation):");
    scanf("%s", month);

    // find out what month format was given
    if(strlen(month) < 3 && isdigit(*month))
    {
        monthInput = atoi(month);
    }
    else 
    {
        monthInput = GetMonthNumber(month);
    }   

    printf("\nEnter the year:");
    scanf("%s", yr);
    if(isdigit(*yr))
        yearInput = atoi(yr);

    // invalid data?
    if(monthInput == 0)
    {
        printf("You entered an invalid month. You will have to start over.");
    }
    else if(yearInput == 0)
    {
        printf("You entered an invalid year. You will have to start over.");
    }
    else
    {
        countofDays = CountDays(monthInput);

        countofDays += dayInput;

        printf("You entered %s %d.\n", month, dayInput);

        // leap year?
        if(yearInput % 4 ==  0 && monthInput > 2)
            countofDays += 1;
        printf("The total number of days in the year through that date is %d.\n", countofDays);
    }
    return 0;
}

int GetMonthNumber(char month [MAXNAME])
{
    // return the number for the selected month
    int result;
    for(int i = 0; i < 12; i++)
    {
        if(strcmp(monthList[i].name, month) == 0 || strcmp(monthList[i].abbrev, month) ==0)
            result =  atoi(monthList[i].number);     
    }
    return result;
}

int CountDays(int month)
{
    // count the total days from the selected month
    // up to the previous month
    int result;
    if (month > 1)
    {
        for(int i = month-2; i >= 0; i--)
        {
            result += monthList[i].numDays;
        }
    }
    return result;
}
