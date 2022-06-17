// //Other C processors
// #define
// #include
// // #undef = undefine a macro 

//#ifdef=
//#if=
//#else = 
//#elif=

// #pragma = to issur some special commands to the compiler


//PREDEFINE MACROS IN C
// 1 = __DATE__ = the current date as character literal in "MM DD YYYY" format
// 2- __TIME__ = this contains the current timeas a character literal in "hh::mm:ss"
// 3- __FILE__ = The current flename as a string literal 
// 4- __LINE__ = the current line number as a decimal constant
// 5- __STDC__ = Defined as I(one) when the complier complies with the ANSI standard


#include <stdio.h>
#include <stdlib.h>


int main()
{
    // printf("File name is %s\n", __FILE__);// gives the current file name
    // printf("today's Date is %s\n", __DATE__);// gives the current DATE 
    // printf("time now is %s\n", __TIME__);// gives the current TIME
    printf("Line no. is %d\n", __LINE__);// gives the current TIME

    printf("ANSI: %d\n ",__STDC__); 
    return 0;
}
