#include <stdio.h>
// #include <stdlib.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int j=0,sum=0;

    for (int i = 0; i < 6; i+=2)
    {
        printf("i = %d\n",i);
        printf("\nsum= %d",sum);
        sum = sum+arr1[i];
        if (i%2==0)
        {
        printf("j= %d ",j);
            sum= sum+arr2[j];
            j++;
        }       
    }
    printf("\n%d",sum);
      
    return 0;
}
