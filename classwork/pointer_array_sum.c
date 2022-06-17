#include <stdio.h>
int addnum(int *ptr){
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += *(ptr+i);
    }
    return sum;
    
}
int main()
{
    int arr[5]={200,400,600,800,1000};
    int total = addnum(arr);
    printf("The total sum of array elements is %d",total);


    return 0;
}
