// A storage class defines scope, default initial value &lifetime of a variable.

// A storage calss defines following attributes about a variable in c:
// 1- scope = where will this variable be available(kaha tak)
// 2- default initial value = kuch nahi hai to kya hoga 

// 3- lifetime=(kab tak)life of that variable

/*
//IN C language , following (4) storage classes are most oftenly used:
// 1- Automatic Variable
// 2- External Variable
// 3- Static Variable
// 4- Register Variable
*/

// // 1 - Automatic Variable(local variables)
// scope= local to the function body they are defined in
// default value - garbage value
// lifetime: till the end of the function block they are defined
// //A variable defined without any storage class specification by default an automatic variable
// ex= int a and auto int a are same

// // 2 = External variable(like global variable)
// scope - global to the program they are defined in
// default initial value - 0;
// lifetime= these variables are declared outside any function. they are available throughout the liftime of program
// A global variable can be chaged by any function in the program
// ex= int harry written outsie any function will tell compiler that harry is a global variable
// it is recommmended to minimize the use of unneccesary global variables in a program

// extern keyword
// extern keyword is used to inform our c compiler that a given variable is declared somewhere elseusing extern will not allocate space for the vaiable

// 3- Static vairable
// scope= local to the block they are defined in
// default initial value = 0;
// lifetime- throughout the program
// A static variable remains under existence for use wihtin the funciton for entire program run .
// static int harry written inside any function will tell compiler that harry is a static variable.
// it is recommended to minimize the use of unnecessary static variables in a program

// // 4-Register variable()
// scope= local to the function they are declared in
// default intitial value = garbage value
// lifetime= they are available till the end of the function block in which they variable is defined.
// register variables requests the compiler to store the variable in the Cpu register instead of storing in the memory to have faster access.
// Generally this is done for the variables which are begin used frequently

#include <stdio.h>
// #include "temp.c"

int myfunc(int a, int b)
{
    // auto int myvar;
    // int myvar;// means local varialbe
    // extern int myvar; //means global variable

    static int myvar;
    myvar++;
    printf("The myvar is %d\n", myvar);

    // myvar = a + b;
    return myvar;
}

// extern int myvar = 34;
int main()
{
    // Declaration- telling the compiler about the variable (no space reserved)

    // Definition= declaration + space 
    
    register int myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    // int myvar = 445;
    // printf("The myvar is %d\n", myvar);

    return 0;
}
