/*
// A void pointer is pointer that has no data type associated with it
// A void pointer can be easily typecasted to any pointer type
// IN simple language it is a general purpose pointer variable
//it is s genral purpose pointer 

// It is not possible to dereference void pointers
// pointer arithmetic is not allowed in C standard with void pointer
// hence it is not recommended to use pointer arithemetic with void pointer 

*/


#include <stdio.h>
int main()
{
    int a = 345;
    float b = 3.2;
    void *ptr;
    ptr = &a;

    printf("The value of a is %d\n", *((int *)ptr) );//typecasted void to int

    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr) );//typecasted void to float

    //same typecasting is done in dynamic memory allocation
    return 0;
}


