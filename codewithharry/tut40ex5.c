// reverse the array 

#include <stdio.h>
// here we use swapping method
// 
void arrayRev(int arr[])
{
    for (int i = 0; i < 7/2; i++)
    {   
        int temp;
        //swap item arr[i] with item (6-i)arr[6-i]
        // these three line is used to swap two numbers
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
        // if we run this loop for full array then give same as the array so we only run at the mid point 
    }
    
}


void arrayPrint(int arr[]){
  for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n",i,arr[i]);
    }  
}

int main()
{
    int arr[]= {2,3,4,5,5,6,455};
    printf("Before reversing the aray\n");
    arrayPrint(arr);

    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    
    return 0;
}