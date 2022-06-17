// #include <stdio.h>

// int main()
// {
//     int mat1[3][3], mat2[3][3],mat3[3][3];
//     int i ,j,k;
//     printf("Enter matrix mat1(%dx%d) row-wise :\n",3,3);
//     for (int i = 0; i < 3; i++){
//         for ( j = 0; j < 3; j++)
//         {
//         scanf("%d",&mat1[i][j]);
//         }

//     }
//     printf("Enter matrix mat3(%dx%d) row-wise :\n",3,3);
//     for (int i = 0; i < 3; i++){
//         for ( j = 0; j < 2; j++)
//         {
//         scanf("%d",&mat2[i][j]);
//         }

//     }

//     // --------Multipication code here-----------

//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             sum=0;
//             for ( k = 0; k < 3; k++)
//             {
//                 sum +=mat1[i][k] * mat3[k][j];
//             }
                    // mat3[i][j]=sum;

//         }

//     }

//     printf("The resultant matrix mat3 is :\n");
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             printf("%d ",mat3[i][j]);

//         }
//         printf("\n");

//     }

//     return 0;
// }

#include <stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum;
    int m, n, p, q;

    // ---------Taking the matrix as input from the user-----------
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Please enter first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);
    printf("Please enter second matrix:\n");

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // ---------Printing the matrix-------------
    printf("Your first matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Your second matrix is:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");

    }

    // ---------code for multiplication-------- 
    if (n!=p)
    {
        printf("Can't multiply these matrix");
    }

    else{
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                sum = 0;
                for ( k = 0; k < n; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j]=sum;
                
            }
            
        }
        

    }

    printf("Matrix after multiplication is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        
    }
    
    

    
    

    return 0;
}
