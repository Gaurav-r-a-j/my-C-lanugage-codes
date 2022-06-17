// Local variable
/*
scope is a region of the program where a defined varaible can exist and beyound which it cannot be accessed
variables which are accessed inside a function or a block are called local varaibles.
they can only be accessed by the function they are declared in .
the are inaccessible to the functions outside the function they are declared in
*/

// global variable
/*
These are the varaibles defined outside the main method.
Global variables are accessible throughout the entire program from any function.
If a local and global variable has the same name, the local vaiable will take preference
*/

// formal arguements
/*
these variables are treated as local variables within a function.
These variables take precedence take precedence over golbal variables.
*/

// Static vaiables
//  syntax = static data_type name = value;
//  ex- static int harry = 4;
/*
Static variable are varaible which have a property of preserving their value even when they go out of scope.
They preseve their value from the previous scope and are not initialized again.
Static varaiable reamains in memory throughout the span of the program
Static variables are intialized to 0 if not initialized explicitly.
IN c , static variable can only be initialized using constant literals
//static variable progam run hone se pahle memory le leta hai


*/

#include <stdio.h>

int b = 34; // this is a global variable since it is declared outside main()

int ret(){
    return 23*3;
}


int func1(int b1)
{   
    //// static int myvar = ret();// show error as main ke run hone se pahle hota hai
    static int myvar = 98; // ignore this once called and bydefault starting value is 0
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n",b);
    // printf("The address of b inside func1 is %d\n",&b);
    return b1 + myvar;
}
int main()
{
    int b = 45;
    // printf("The address of b inside mian is %d\n",&b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("the value of func1 is %d ", val);
    return 0;
}
