// take input form the use and ask use to choose 0 for triangular star pattern and 1 for reverse triangular star pattern


#include <stdio.h>
// int main()
// {   
//     int starrows =0;
//     int pattern;
//     printf("Enter the no. of star rows : ");
//     scanf("%d",&starrows); 
//     printf("please select the patter\n1- triangular pattern\n2- reverse triangular pattern \n");
//     scanf("%d",&pattern);

//     for (int i = 1; i <= starrows ; i++)
//     {
//         if(pattern==1){
//         // print * for the line
//         for (int colno = 1; colno <= i; colno++)
//         {
//             printf("* ");// here we can display anything we want
//             // printf("%2d ",i);// %2d is used to give no. of character space in this 
//         }
//         }

//         for (int j = i; j <= starrows; j++)
//         {
//             printf("* ");
//         }

//         printf("\n");
//     }
    
    
//     return 0;
// }



// triangular star pattern and reverse triangular star pattern

// solving using funcion
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
        printf("* ");
            
        }
        
        printf("\n");
    }
    
}


// function for reverse star pattern
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
        printf("* ");
            
        }
        
        printf("\n");
    }
    
}



int main()
{
    int rows,type;
    printf("Enter \n0- for star pattern \n1- for reversed start pattern\n");
    scanf("%d",&type);
    printf("How many rows do you want?\n");
    scanf("%d",&rows);

    switch (type)
    {
    case 0:
    starPattern(rows);
        break;
    case 1:
    reverseStarPattern(rows);
        break;
    
    default:
    printf("you have entered invalid choice");
        break;
    }
    // starPattern(rows);
    // reverseStarPattern(rows);
    return 0;
}