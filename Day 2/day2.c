/*
#include <stdio.h>
int main()
{
    // type's of data type in C
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
}


*/

// Real life Example..

#include <stdio.h>
int main()
{
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);
}

/* Type Conversion in C :-
        we have 2 type's
           1 => Implicit Conversion (automatically) [convert automaticaly in computer ex. foant to int   convert automatically high size variable to low size variable]
           2 => Explicit Conversion (manually) [convert by Human by putinf (datatype)   ex. (int)float]


           Implicite :-
           int number = 8;
           flote number = 8;


           Explicit :-
             int maxScore = 500;
             int userScore = 423;
           float ratioOfBothScore = (float) userScore / maxScore;

// Print the percentage
printf("User's percentage is %.2f", percentage);


**************************************Constant***************************************************
Now that you have seen different types of variables in C, you should also know that sometimes you need variables that should not change.
This can be done with the const keyword, which makes a variable unchangeable and read-only:

const int number = 43;
const int number2 = 32;


*/
