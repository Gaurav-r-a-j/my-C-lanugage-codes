#include <stdio.h>
int main()
{
    int num;
    char ch;
    // printf("Press 1 for Violet\n");
    // printf("Press 2 for Indigo\n");
    // printf("Press 3 for Blue\n");
    // printf("Press 4 for Green\n");
    // printf("Press 5 for Yellow\n");
    // printf("Press 6 for Orange\n");
    // printf("Press 7 for Red\n");
    do
    {
    
    
    printf("Press 1 for Violet\n");
    printf("Press 2 for Indigo\n");
    printf("Press 3 for Blue\n");
    printf("Press 4 for Green\n");
    printf("Press 5 for Yellow\n");
    printf("Press 6 for Orange\n");
    printf("Press 7 for Red\n");

    // printf("Press Y for start playing: \n");
    // printf("Press q for Exit\n");
    // scanf("%c", &ch);
    // scanf("%c",&ch);

        printf("Enter the number for the colour you want to print:");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("VIOLET \n");
            break;
        case 2:
            printf("INDIGO \n");
            break;
        case 3:
            printf("BLUE \n");
            break;
        case 4:
            printf("GREEN \n");
            break;
        case 5:
            printf("YELLOW \n");
            break;
        case 6:
            printf("ORANGE \n");
            break;
        case 7:
            printf("RED\n");
            break;

        default:
            printf("Enter the number from the given menu\n");
            break;
        }

        printf("do you want to play more\n Enter y ");
        getchar();//this is used to solve bufferoverflow
        scanf("%c",&ch);
    


    

    } while (ch=='y' || ch=='Y');




    return 0;
}
