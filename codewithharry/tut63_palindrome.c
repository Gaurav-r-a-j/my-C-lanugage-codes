// palindrome = ulta sidha ek samaan

#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int reversed = 0; //
    // reverse the number
    int originalNumber = num;//we store num in this because num chagne ho raha hai niche 0 ban ja raha hai while loop me isilye
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    // printf("The reversed number is %d\n",reversed);

    if (originalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not\n");
    scanf("%d", &number);

    // Your taks is to implement this function
    if (isPalindrome(number))
    {
        printf("The number is palindrome \n");
    }
    else
    {
        printf("the number is not a palidrome \n");
    }
    return 0;
}
