// WE have four function that helps us achieve this task;
////comes under library stdlib.h
/*
1-malloc
2-calloc
3-realloc
4-free
*/

/*
// Malloc()
syntax =
ptr_type *ptr;
ptr =(ptr-type*) malloc(no*size_in_byte);
// malloc stand for memory allocation.
// it reserves a block of memory with the given amount of bytes
// The return value is void pinter to the allocated space.
// Therefore the void pinter need to be casted to the appropriate type as per the requirements.
// However if the space is insufficient allocation of memory fails and it return a Null pointer
// All the values at allcated memory are intialized to garbage values
*/

/*
//calloc()
syntax-
ptr= (ptr_type*) calloc(n,size_in_byte);
// stands for contigous allocation
// it reserves n blocks of memory with the given amount of bytes.
// The return value is a void pinter needs to be casted to the appropriate type as per the requirements
// However if the space is insufficient allocation of memory fails and it return a NULL pointer
// All the values at allocatd memory are intitialized to 0;

*/

/*
realloc()
syntax=
ptr = (ptr_type) realloc(ptr, new_size_in_bytes);
// realloc() stands for reallocation
// it the dynamically  allocated memory is insufficient we can change the size of previously allocated memory using realloc() funcion
*/

/*
//free()
syntax =
free(ptr);
free() is used to free the allocated memory
if the dynamically allocated memory is not required anymore we can free it using free function
this will free the memory being used by the program in the heap
*/

#include <stdio.h>
#include <stdlib.h> //

int main()
{
    // // Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    //     scanf("%d",&n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at %d of this array %d\n",i,ptr[i]);
    // }



    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
        scanf("%d",&n);

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array %d\n",i,ptr[i]);
    }


    // Use of realloc
    
    printf("Enter the size of the new array you want to create\n");
        scanf("%d",&n);

    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array %d\n",i,ptr[i]);
    }


    free(ptr);//we can free it anywhere

    return 0;
}  

