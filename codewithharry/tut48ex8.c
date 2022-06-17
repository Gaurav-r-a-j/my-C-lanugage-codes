// Dynamic memory allocation
// abc pvt ltd. manages employee records of other companies
// employee id can be of any lenght and it can contain any character
// for 3 employee id in a character array which is allocated dynamically
// store the employee id in a character array which is allocated dyanmically.
// you have to create only one character array dynamically

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char a,b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee id \n",i+1);//+1 as we want string and it should end with \0 null character
        scanf("%d",&chars);

        getchar();// dissolve enter 
        printf("Enter the value of a\n");// before using gethcar we get input buffere problem means it takes enter as a valid input in a and move to b 
        scanf("%c",&a);
        
        getchar();

        printf("Enter the value of b\n");
        scanf("%c",&b);
        ptr = (char *)malloc((chars+1)*sizeof(char));
        printf("Enter your Employee id \n");
        scanf("%s",ptr);

        printf("Your Empoyee id is %s\n",ptr);
        free(ptr);

        i = i + 1;
    }

    return 0;
}
