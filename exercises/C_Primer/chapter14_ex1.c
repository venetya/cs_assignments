#include <stdio.h>
#include <string.h>
/*
Redo review question 3, but make the argument the spelled-out name of the month
instead of the month number. (Don’t forget about strcmp().)
*/

#define MAXLEN 10
#define YEAR 12

struct month {char name[MAXLEN];
        char abbrev[5];
        int numDays;
        int number;
};

struct month year[YEAR] = {
    {
        "January",
        "Jan",
        31,
        1
    },
    {
        "February",
        "Feb",
        28,
        2
    },
    {
        "March",
        "Mar",
        31,
        3
    },
    {
        "April",
        "Apr",
        30,
        4
    },
    {
        "May",
        "May",
        31,
        5
    },
    {
        "June",
        "Jun",
        30,
        6
    },
    {
        "July",
        "Jul",
        31,
        7
    },
    {
        "August",
        "Aug",
        31,
        8
    },
    {
        "September",
        "Sep",
        30,
        9
    },
    {
        "October",
        "Oct",
        31,
        10
    },
    {
        "November",
        "Nov",
        30,
        11
    },
    {
        "December",
        "Dec",
        31,
        12
    }
};     


void GetNumDays(struct month * year);

int main(void)
{  
    GetNumDays(&year[0]);
    return 0;
}

void GetNumDays(struct month year[])
{
    int numDays = 0;
    char monthName [MAXLEN];
    printf("Enter the name of a month and get the number of days:\n");
    scanf("%s", monthName);
    printf("You entered %s.\n", monthName);
    for(int i = 0; i < YEAR; i++)
    {
        if(strcmp(monthName, year[i].name)==0)
            numDays = year[i].numDays;
    }
    
    if(numDays == 0)
        printf("%s is invalid.\n", monthName);
    else
        printf("The month of %s has %d days.\n", monthName, numDays);
}
