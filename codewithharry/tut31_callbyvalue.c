// in this video we are going to learn call by value and call by reference 


// first lets see acutal and formal parameters
// actual - jo acutal me hai main ke andar par function me uski coopy jaati hai jisko hm actual parmeter kahte hai

// formal = ye jo copy hai function me agar hm isko change bhi karde toh bhi mian ko koi fark nahi padta 



// call by value = actual value bhejna, cant't change the actual value 

// call by reference = addreass bhejna hai , can change the acutal value

// ex. for call by refrence 
#include<stdio.h>
//function definition to swap the values
void swap(int *x , int *y){
    int temp;
    temp = *x ; //save the value at address x
    *x = *y ; //put y into x
    *y = temp ; //put temp into y
    // return;
}

//function definition to change the value
void changeValue(int *address){
    *address = 3432;
}

int main(){
    int a =34, b=74;
    printf("%d and %d\n", a,b);
    swap(&a,&b);// call by reference address bhej rahe hai
    printf("%d and %d\n", a,b);

    changeValue(&a);
    printf("The value of a now is %d\n",a);
    return 0;
}