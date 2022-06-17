// /*
// array = collection of data items of the same type
// items are stored at contigous memory locations

// Advantage - it can be used to store multiple data items of same type by using only single name. accessing an item in a given array is very fast

// we can acces items fast using base address and the index.

// disadvantage - insertion and deletion operation not possible
// wastage of memory since array are fixed in size;
// if there is enough space present in the memory but not in contigouous form you will not be able intialize your array.
// it is not possible to increase the size of the array, once you have declared the array.
// */

// #include <stdio.h>

// int main()
// {
//     // int a[];// error becasue if we only make an array and don't initialize the elements then we need to given the size
//     // a[0]=23; //after giving a[0]=16 the other value are garbage values here as we haven't initialize any value to it in starting.

//     // int a[]={4,6,6,};//true we can make array like this without giveing size if we intialize it when delclaring
//     // int a[5]={3,5};//here the rest elements value will be 0 .

//     // int marks[3];
//     int marks[][4] = {{23, 75, 75, 26},
//                       {34, 56, 33, 86}};

//     // for (int i = 0; i < 3; i++)
//     // {   printf("Enter the value of %d element of the array\n",i);
//     //     scanf("%d", &marks[i]);
//     // }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             // printf("the value of %d , %d element of the array is %d\n", i, j, marks[i][j]);

//             printf("%d ",marks[i][j]);
//         }
//         printf("\n");
//     }

//     // marks[0]=34;
//     // printf("marks of student 1 is %d\n", marks[0]);
//     // marks[0]=3654;
//     // marks[1]=354;
//     // marks[2]=384;
//     // printf("marks of student 1 is %d\n", marks[0]);

//     return 0;
// }






// /*
// //two dimensional array;
 
// int b[2][3]; // to get the size multiply both numbers here get size 6,
// here b[2][3] means two blocks and each block contains 3 elements in it
// means block0 = 0,1,2 and block1 = 0,1,2;
// or
// 0 1 2 = first block or say row has 0 index
// 0 1 2 = second block or say row has 1 index

// why 2d array
// if data in group, similary for 3d


// When should we use an array
//nature of data should be same 

// */

// // sum of two matrix
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter 9 numbers for first matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }

    }

    printf("Enter 9 numbers for second matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
