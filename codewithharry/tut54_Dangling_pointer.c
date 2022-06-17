//A pointer pointing to a freed memory location or whose content has been deleted is called a ddangling pointer.//latak gaya

//Dangling pointers jo ab nahi rahi usko point karna 

/*
Causes of Dangling pointer

//Deallocation of memory 
// Returning local variable in function calls 
//Variable going out of scope={->scope start   }->scope end

*/

//Dangling pinters can introduce nasty bugs in our C programs.
//Danging pointer bugs frequently become security holes at tmes.
// we can avoid issues caused by dangling pinters by initializing pointer to NULL
//after de-allocating memory pointer will be no longer dangling
// Assingnig NULL value means pinter is a null pointer now 


#include <stdio.h>
#include <stdlib.h>


int* functionDangling(){
    int a,b,sum;
    a =34;
    b=23;
    sum=a+b;
    return &sum;

}
int main()
{
    //Case-1: De allocation of a memory block
    int *ptr = (int *) malloc(7* sizeof(int));
    ptr[0]=34;
    ptr[1]=44;
    ptr[2]=54;
    ptr[3]=64;

    free(ptr);//Now ptr is a dangling pointer.


    // case2 : fucntion returning local variable address 
    int * dangPtr = functionDangling();//Now dangptr is a dangling pointer.


    
    // Case- 3: If a variable goes out of scope 
    int *danglingPtr3;
    {
        int a = 12;
        danglingPtr3=&a;
    }
    //Here vaiable a goes out of scope which means dangling Ptr3 is pointing to a location which is freed and hence danglingPtr3 is a dangling pointer
    return 0;
}

