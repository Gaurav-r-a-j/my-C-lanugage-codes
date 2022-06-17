// function pointers are used to pass a function to a function
// This passed function can then be called again
// This provides programmer to write less code to do more stuff

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}


void greetHelloExecute(int(*fptr)(int , int)){
    printf("Hello user\n");
    printf("The sum of a and b is %d\n", fptr(5,7));
}

void greetGmExecute(int(*fptr)(int , int)){
    printf("Good morning user\n");
    printf("The sum of a and b is %d\n", fptr(5,7));
}


int main()
{

    int(* ptr)(int , int);
    ptr = sum;
    greetGmExecute(ptr);
    greetHelloExecute(ptr);
    return 0;
}
