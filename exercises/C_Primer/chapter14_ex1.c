#include <stdio.h>
#include <string.h>
#define MAXLEN 10
#define YEAR 12

struct month {char name[MAXLEN];
        char abbrev[5];
        int numDays;
};

struct month year[YEAR] = {
    {
        "January",
        "Jan",
        31
    },
    {
        "February",
        "Feb",
        28
    },
    {
        "March",
        "Mar",
        31
    },
    {
        "April",
        "Apr",
        30
    },
    {
        "May",
        "May",
        31
    },
    {
        "June",
        "Jun",
        30
    },
    {
        "July",
        "Jul",
        31
    },
    {
        "August",
        "Aug",
        31
    },
    {
        "September",
        "Sep",
        30
    },
    {
        "October",
        "Oct",
        31
    },
    {
        "November",
        "Nov",
        30
    },
    {
        "December",
        "Dec",
        31
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
