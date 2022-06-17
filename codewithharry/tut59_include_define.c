/*

//the #include directive 
// --> ek file ka contnt dusre file me include karna and chaining bhi ho sakta hai

// In c programming there are two common formats for #include 
// #include <header.h>// the angle bracket say to look in the standard system directories
// #include "filename.h"// The quotation marks say to look in the current directory
 
////Disk frive full path is allowed, but discouraged since it is not portable.
// ex- #include <pathdiretory> // too specific
// <ymy/file/cfile> // relative and portable path to the standard 

*/



/*
The #define directive

The #define directive is used to "define"  preprocessor "variable".

The #define preprocessor directive can be used to globally replace a word with a number.

it acts as if an editor did a global search and replace edit of the file.
*/

// #define directive can be used for debugging
// We can have printing statements that we only want active when debugging
// We can "protect " them in a "ifdef" block as follows


//WE can also create macros using #define
//Macros operate much like functions , but because they are expanded it place and are generally faster


#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

#define SQUARE(r) r*r

int main()
{
    float var = PI;
    int a = 4;
    printf("the value of PI is %f\n",var);

    printf("The area of this circle is %f\n",PI * SQUARE(a));
    
    return 0;
}


