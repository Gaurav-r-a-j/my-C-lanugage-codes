//null means kahi point nahi kar raha mtlb ki isko derefernce nahi kar sakte lekin aage chal ke kar sakte hai

// Null pointer is a pointer which has a value reserved for indicating that the pointer or refernce does not refer to a  valid object

// A null pointer is guaranteed to compare unequal to any pointer that points to a valid object

//Dereferencing a null pointer is undefined behavior in C, and a conforming implementation is allowed to assume that any pointer that is dereferenced is not null.

//NULL pointer is a specific pointer which is mentioned in C stnadard and it has specific purposes.

// NULL pointer gives a funcitonality to C programmer to check whether a pointer is legitmate or not



/*
Uses of NULL pointer

To intialize a pointer variable in cases where pointer variable has not been assigned any valid address yet.

To check for legitimate address location before accessing any pointer variable.
By doing so, we can perform error handling while using pointer with C.
Example of such error handling can be dereference pointer variable only if it's not NuLL

To pass a null pointer to a function arguement when we don't want to pass any valid memory address.
*/


//null pointer points to nothing


//NULL  macro is defined as void*0 in haeder files of most of the C complier implementations
// NULL pointer vs UNinititalized pointer an uninitialized pointer contains an undefined value
// A null pointer stores ea defined value which is the one decide by the envionment ot not be a valid memory address for any object

// Null pointer vs Void pointer= Null pointer is a value where as void pointer is a type

//null pointer wo pointer hai jo kahi point nahi karta


#include <stdio.h>
int main()
{
    int a = 23;
    // int *ptr = NULL;
    int *ptr;//An uninitialized pinter can point anything it can be null or others etc

    if(ptr!=NULL){
    printf("The address of a is %d\n",ptr);// if we try to get value of null pinter then the program crasses
    }
    else{
        printf("The pointer is a null pointer and cannot be derefrenced");
    }
    return 0;
}
