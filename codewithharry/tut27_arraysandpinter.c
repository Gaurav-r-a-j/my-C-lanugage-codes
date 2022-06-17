/*
There are four arithmetic ooperators that can be used on pointers:
++
--
+
-
here operations applied on size 
*/

#include <stdio.h>
int main()
{
    
    // int a=34;
    // int *ptra = &a;
    // char a='34';
    // char *ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d",ptra-1);

    //  increased by four because pointer follow the value of size of the data to add 
    //  so simpley pinter or array arithmetic depeends upon architecture.
    // // we can use any format specifiers like %p %x 
    // &arr[value]=arr+value

    // arr[i] or *(arr+i) is same

    int arr[]= {43,645,754,74,74,74,4};
    int *arrayptr = arr;

    printf("%d \n",arr[3]);
    printf("The address of first element of array is %d \n",&arr[0]);
    printf("The address of first element of array is %d \n",arr);// this and arr[0] gives same result
    printf("The address of second element of array is %d \n",&arr[1]);
    printf("The address of second element of array is %d \n",arr +1);//this and arr[1] gives same result
    printf("The address of third element of array is %d \n",&arr[2]);

    
    printf("The value at address of first element of array is %d \n",*(&arr[0]));
    printf("The value at address of first element of array is %d \n",*(arr));// this and arr[0] gives same result
    printf("The value at address of second element of array is %d \n",*(&arr[1]));
    printf("The value at address of second element of array is %d \n",*(arr +1));//this and arr[1] gives same result
    // arr--;// this line will through an error
    // arrayptr++;// this is valid

    // printf("The value at address of third element of array is %d \n",*(&arr[2]));
    return 0;
}



/*
l-15 ,p-2





*/