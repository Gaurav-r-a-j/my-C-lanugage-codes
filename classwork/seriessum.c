#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n ,i=1 ;
    float sum =0.0 ;
    printf("Enter n:");
    scanf("%d",&n);

    do
    {   if (i%2!=0)
    {
        /* code */
        // sum = sum + ((1/i) - 1/(i+1));
        sum = sum + 1/(float)i;
    }
    else{
        // sum = sum +  (1/i+1);
        sum = sum - 1/(float)i;

    }
    
        i++;
    } while (i<=n);

    printf("%f\n",sum);
        
    

// printf("%d",1/2);
    return 0;
}



// // C program to find sum of series
// #include <stdio.h>
 
// // Function to return sum of 1/1 + 1/2 + 1/3 + ..+ 1/n
// double sum(int n)
// {
//   double i=1, s = 0.0;
//   for (i = 1; i <= n; i++)
//       s = s + 1/i;
//   return s;
// }
 
// int main()
// {
//     int n = 2;
//     printf("Sum is %f", sum(n));
//     return 0;
// }