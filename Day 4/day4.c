/*
If else statement used to compare to condition and run the code if condition in true or false
*/

#include <stdio.h>
int main()
{
    int number = 10;
    // if statement
    if (number >= 0 && number <= 20)
    {
        printf("Number is less than 20");
    }
    else
    {
        printf("Number is greater than 20");
    }
}

// Nested if else :- if else condition used inside if else statement

#include <stdio.h>
int main()
{
    int number = 10;
    // Nested if-else statement
    if (number >= 0 && number <= 20)
    {
        if (number >= 0 && number <= 10)
        {
            printf("Number is greater than 0 and less than 10");
        }
        else
        {
            printf("Number is greater than 10 and less than 20");
        }
    }
    else
    {
        printf("Number is greater than 20");
    }
}

// Switch Statement :-  Instead of writing many if..else statements, you can use the switch statement.

#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day :- ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("Enter the valid day");
    }
}



