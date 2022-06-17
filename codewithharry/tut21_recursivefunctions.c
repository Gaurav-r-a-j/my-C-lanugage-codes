#include<stdio.h>
// Recursive functions or Recursion is a process when a function calls a copy of itself to work on a smaller problem.
// any functions which calls itself is called recursive function.
// dividing a big problem in small sub problems
// temination condition is imposed so that it don't run infinitely
// any problem that can be solved recusively can also be solved iteratively


int factorial(int number){
    if(number == 1 || number ==0){
        return 1;
    }
    else{
        return(number* factorial(number-1));
    }
}


int main(){

    // factorial calculation

    /* The case at which the function doesn't recur is called the base case ex-0!=1 and 1!=1
    The instances where the functions keeps calling itself to perform a subtask is called the recursive case*/

    int num;
    printf("Enter the number you want the factorial of \n");
    scanf("%d",&num);
    printf("the factorial of %d is %d", num,factorial(num));

    return 0;
}








