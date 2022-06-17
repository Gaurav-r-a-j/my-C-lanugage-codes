//uninitialized pointer are known as wild pointer

//These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly.

//Derefrencing wild pointer can cause nasty bug;

//It is suggested to always initialize unused pointers to NULL


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =345;
    int *ptr;//This is a wild pointer
    
    // *ptr = 34;// this is not a good thing to do

    ptr = &a;// ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);

    return 0;
}

