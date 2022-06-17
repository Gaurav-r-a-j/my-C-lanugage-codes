/*
pointers - 
variable which stores the address of another variable.
can be of type int,char, function , or any other pointer.
size depends on the architecture ex- 2byte of int for (Dos) 32bit
pointer in c programming language can be declared using *(asterisk symbol).
* is a dereference operator also called indirection operator used to get the value at a given address.
The address of opetator '&' returns the address of a variable.
 
*/

// search google for different format specifiers
#include <stdio.h>

int main(){
    printf("Lets learn about pointers\n");
    int a=76;
    int *ptra= &a;// *means pointer
    int *ptr2=NULL;
    printf("The address of pointer to a is %x\n", ptra);//%x is for hexadecmal numbers pointer has also some address.
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", *ptra);

    printf("The address of some garbage is %p\n", ptr2);
    return 0;
}
/*
Null pointer-
a pointer that is not assigned any value but null is known as the null pointer.
IN computer programing, a null pointer is a pointer that does not point to any  object or function 
we can use it to intialize a pointer varaialbe when that pointer variable isn't assigned any valid memory address.
*/

//uses of pointer
// dynamic memory allocatioon 
// arrays, functions and structures
// return multiple values from a function 
// pointer reduces the code and improves the performance



/*
& is known as address of operator 
it is an unary operator
Operand must be the name of variable
& operator gives addrese number of variable
& is also known as regerencing operator

* is indirection operator  or dereference operator
it is also known as dereferencing ooperator
It is an unary operator 
It takes address as an argument
* returns the content/value of the  container whose address is its argument

%d has range b/w -32768 to 32767
%u 0 to 65535 ==> it is prefer for address printing


we can store address in another variable

But j has to be delcared before use ( we use int *j;)// here star is used as symbol not as function or operator


Base address
int a, *j;
//pointer only has its base address or first block of memory or byte address

jis type ka variable ho usi type ka pinter bhi hona chahiye



// EXtended Concept of pointers

to store pointer vairable address in other vairalbe we have to declare the variable using double asterik(like **q)

//asterik tells about the label of pointer
and it store the address of the variable having only one lable lower than it 

We cannot add multiply or divide two adresses ( subtraticon is possible

we cannot multiply an integer to an address and similarly we cannot divide an address with an integer value



we can add or subtract integer to from an address

Call by reference is same as call by address in C but different in C++


*/


