// We pass arrays to a functionn when we need to pass a list of values to a given function.

/*
we can pass the array to a function;
1- by decalring array as a parameter in the function (ex- int avg(int arr[]))
inside funciton if you change the value of the array it gets reflected in the main function

2- by declaring a pointer in the function to hold the base address of the array (ex- int sum(int *ptr))
*/

#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
    array[0] = 345; // very important point that if you chagne any value here it gets reflected in main()
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        // printf("the value at %d is %d\n",i,ptr[i]);
        printf("the value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 343;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    // int arr[][2] = {{2, 34}, {6, 65}};
    int arr[]= {45,64,64,24,6,52};
    // printf("Rhe value at index 0 is %d\n",arr[0]);
    func1(arr);//this passes array as a pointer
    // printf("The value at index 0 is %d\n",arr[0]);

    func2(arr);// here value chages but not shown
    // func2(arr);// the value changes here and shown also

    // func3(arr);
    return 0;
}
