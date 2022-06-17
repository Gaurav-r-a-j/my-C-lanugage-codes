#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
int main()
{
    // sum of negative values of array
    // int j = 0, val = 0;
    // int n, m, price[104];
    // printf("No. of tvs and No of tvs he can pickup at a time");
    // scanf("%d %d", &n, &m);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter  prices of tvs:");
    //     scanf("%d", &price[i]);
    // }
    // while (j < n)
    // {
    //     if (price[j] < 0)
    //     {

    //         printf("%d ", price[j]);
    //         val = val + price[j];
    //     }

    //     j++;
    // }
    // printf("%d", -val);

    // int n;
    // int arr[n];
    // printf("Enter no. of test cases ");
    // scanf("%d",&n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter no:");
    //     scanf("%d",&arr[i]);
    // }







    ////
    // int val = 1;
    // int n;
    // int arr[50];
    // printf("Enter no. of test cases ");
    // scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter no:");
    //     scanf("%d", &arr[i]);
    // }

    // for (int j = 0; j < n; j++)
    // {
    //     for (int k = j + 1; k < n; k++)
    //     {
    //         if (arr[j] == arr[k])
    //         {

    //             printf(" %d ", arr[j]);
    //             val = arr[j] * val;
    //         }
    //     }
    // }

    // if (val != 0 && val>1)
    // {
    //     printf("%d", val);
    // }
    // else if (val == 1)
    // {
    //     printf("%d", -val);
    // }

    // else
    // {;
    // }



    

    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");

    //   l-1,31
    char pali[500];


    return 0;
}
