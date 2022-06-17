// Instructions and Operators 

#include <stdio.h>
#include <math.h>

int main() {


// Instructions - These are statements of program 
// 3 Types 
// 1 - Type Declaration Instructions 
// Declare variable before using it 
// valid statement
// int a = 33;
// int b = a ;
// int c = b+1;
// int d = 1,e;
// // we can decalre multiple variable at a time

// int a,b,c;
// a=b=c=1; //The value is assingning from right to left 

// Invalid statement 
// int old_age = 33;
// int newAge = old_age + years; // Here we have declare variable before assigning it that's why its shows error 
// int years = 2;



// 2- Arithmetic Instructions

    // int a = 1 , b=2;
    // int sum = a+b;

    // int product = a*b;

    // // Valid 
    // int b,c;
    // b = c = 1;
    // int a = b+c ;
    // int e = pow(b,c);
    // printf("%d", e);


    // // Invalid 
    // int b+c = a ;
    // int d = bc ;
    // int e = b ^c ; // In c for power we use pow(x,y) not this. in c "^" this symbol is considered as xor operator

    // Modular Operator (%) - Returns remainder for int, it don't work on float value 
    // printf("%d\n", 4%3);
    // printf("%d\n", -4%3); // for negative remainder take numerator -ve 
    // printf("%d\n", 4.5%3.6); //  this is invalid


    // Type Conversion
    // int to int returns int 
    // float to float returns float 
    // int to float returns float - because int has 2  bytes but float contains 4 bytes (a/c to 16bit architecture)

    // so if we dont want decimal values then we use int but if we wan't our result to be in float we assign one variable as float 
    // implicit conversion - This is done by our compiler itself 
    // explicit conversion - This is done by own 

    // int a = (int)1.99999; //- float to int conversion completely removes the decimal value no roundoff is done
    // printf("%d \n",a);


    // Operator Precedence - it is like BODMAS here the priority is
    // * , / , %  these three operators has top priority 
    // + ,- then after these two operators 
    // = at last we have equal to , equal to is also called as assignment operator in c
    // int a = 4 + 9 *10;
    // printf("%d \n",a);

    // int x = 4*3 / 6*2 ; // Here Comes Associativity rule(for same precedence)- It says left to right
    // printf("%d \n",x);

    // example 
    // int a= 5*2 - 3*2;
    // int a= 5*2 - 3*2; // Here use Associativity
    // int a= 5* (2/2)*2; // Bracket elements will be solved first here
    // int a = 5+2 / 2*3;
    // printf("%d\n",a);
    








// 3- control Instructions-- use to determine flow of programs

// a - Sequence control -- Sequence wise that we are learning from starting 
// b - Decision Control -- if else statement  
// c - Loop Control -- different loops,like for loop while loop 
// d - Case Control -- results depend upon cases







    /*Operators- */
    // True = 1 and false = 0 in c 
    // a - Arithmetic Operators --> (+,-,/,*,%)

    // b. Relational Operators --> gives relation b/w two operands
    // (== , <= ,>= , < ,> , !=)
    // printf("%d\n", 4>3);
    // printf("%d\n", 4 != 4);


    // c. Logical Operators -- give logical thinking
    // AND (&&) , OR(||), NOT(!) 




    // d. Bitwise Operators -- it gives operation b/w 0 and 1
    // e. Assignment Operators --> (=) assign right side value on left side 
    // f. Ternary Operator -- also called as conditnal opertor(condition?true:false)
    
// printf("%d", 4 %3);
// printf("%d", 4 % -3);
// printf("%d", -4 %3);
// printf("%d", -4 % -3);





    return 0;

}            

 