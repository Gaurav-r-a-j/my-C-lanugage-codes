#include <stdio.h>

int main(){

    int age,marks;
    printf("Enter your age: \n");
    scanf("%d",&age);

    printf("Enter your marks: \n");
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\t");
        switch (marks) // this is called nesting switch
        {
        case 45:
            printf("Your marks are 45 .");
            break;
        
        default:
            printf("your age is not 45.");
        }
        break;// this will break only for inner switch statement not for outer
    case 13:
        printf("The age is 13\t");
        break;
    case 23:
        printf("The age is 23\t");
        break; // if we don't use break then it will print the next value after it whether it's a case or default  
    
    default:
    printf("Age is not 3, 13 or 23");
        // break; // we don't use break with default it will treated as redundant..
    }




    return 0;
}