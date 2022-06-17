// function pointers

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2));// just to test the function

    int (*fptr) (int ,int );// declaring a function pointer
    fptr = &sum;//creating a function pointer

    int d = (*fptr)(4,6);// Derefrencing a function pointer
    printf("The value of d is %d\n",d);
    
    return 0;
}
