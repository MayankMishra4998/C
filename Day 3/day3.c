/*
Operators :-  operators used to performe operation on variable or manuplate data or doing mathmetics in program

It's type :-
1 => Arithmetic operators  [used to perform common mathematical operations.]
2 => Relational operators  [used to compare two values (or variables]
3 => Logical operators [used to check the condition and give true and false value's ]
4 => Bitwise operators [used to perform direct operation on variable's]
5 => Assignment operators [used to assign the values ex = or +=]
6 => ternary operators[used to replace the if else condition]

*/

/*
Arithmetic Operator :-

#include<stdio.h>
    int main(){
       int x = 10;
       int y = 3;

       printf("%d\n", x + y); // 13
       printf("%d\n", x - y); // 7
       printf("%d\n", x * y); // 30
       printf("%d\n", x / y); // 3
       printf("%d\n", x % y); // 1

       int z = 5;
       ++z;
       printf("%d\n", z); // 6
       --z;
       printf("%d\n", z); // 5
}
*/


/*
Relational Operator :- 

     #include<stdio.h>
       int main(){
            int passwordLength = 5;

               printf("%d\n", passwordLength >= 8); // 0 (false), too short
               printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters
       }

*/


/*
Logical Operator :- 

#include<stdio.h>
       int main(){
            int isLoggedIn = 1;
            int isAdmin = 0;

            printf("Regular user: %d\n", isLoggedIn && !isAdmin);
            printf("Has access: %d\n", isLoggedIn || isAdmin);
            printf("Not logged in: %d\n", !isLoggedIn);            
       }
*/


/*
BitWise Operator :-

  #include <stdio.h>
      int main() {
    int a = 6;   // Binary: 0110
    int b = 3;   // Binary: 0011

    printf("a & b = %d\n", a & b);   // AND
    printf("a | b = %d\n", a | b);   // OR
    printf("a ^ b = %d\n", a ^ b);   // XOR
    printf("~a = %d\n", ~a);         // NOT
    printf("a << 1 = %d\n", a << 1); // Left Shift
    printf("a >> 1 = %d\n", a >> 1); // Right Shift

    return 0;
}


*/


/*
Ternary Operator :- 

   #include<stdio.h>
       int main(){
          int number = 5; 
          number>=4 ? printf("%d is Greater then 4",number) 
                    : printf("%d is less then the 4",number);
       }
*/












// ******************************Boolens*******************************************************


/*
Booleans :-

Very often, in programming, you will need a data type that can only have one of two values, like:

     YES / NO
     ON / OFF
     TRUE / FALSE


     Example :- 

     #include<stdio.h>
     int main(){
          boolenIsProgrammingFun = true;
          boolenIsFishTasty = false;

          printf("%d", isProgrammingFun);   [ Returns 1 (true)]
          printf("%d", isFishTasty);         [Returns 0 (false)]
}
*/