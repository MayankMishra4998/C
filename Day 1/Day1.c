// the structer of C
/*
 #include <stdio.h>
 int main()
 {
     printf("Hello World");
     return;
 }

*/
// Commont to run c file

/*
gcc File_Name
./a.exe

*/

//   \n is used to create a new line

// Variable = int char flote

/*
 int = used for integer value's
 flote = user for rational value's
 char = user for english alphabate
*/

/*
   for Output :-
   int number = 9 ;
   printf("%d",number);


   flote number2= 9.543;
   printf("%f",number2);


   char name[] = "Mayank";
   printf("%c" ,name);

*/

/*

   for get multipal value's

   int x=3, y=23, z=43 ;
   print("%d %d %d",x,y,z);
*/

/*
   Rule's to set variable name =>
   1=> Names can contain letters, digits and underscores
   2=> Names must begin with a letter or an underscore (_)
   3=> Names are case-sensitive (myVar and myvar are different variables)
   4=> Names cannot contain whitespaces or special characters like !, #, %, etc.
   5=> Reserved words (such as int) cannot be used as names
*/

#include <stdio.h>
int main()
{

    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';
    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);
    return 0;
}