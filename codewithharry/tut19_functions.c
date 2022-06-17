#include<stdio.h>
//functions = breaks the large programs in small pieces and also improves resuablity also called procedure or subroutine

// the basic syntax of a C function is written as follows:
// return_type function_name(data_type parameter1, data_type parameter2,..../ it can be empty also ){

// }

// we have two types of functions = Library functions and user defined functions


int sum(int a, int b);// this is how we declare a function once we declare a function then we can define it anywhere we want to define whether before main or after main

void printstar(int n) // function with arguement and without return value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int takenumber()// function without parameter and return value
{   
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    return i;
}


//similarly we have a function without arguements and without return value 
int main(){
    int a,b,c,d;
    a =23;
    b=224;
    c = sum(a,b);
    // printf("The sum is %d",c);
    // printstar(7);
    d = takenumber();
    printf("the number enterd is %d\n",d);


    

    return 0;
}

int sum(int a, int b){// function with arguements and with return value too 
    return a+b; // if the function written after its call then it show error so to fix this error we decalare function before the function call
}