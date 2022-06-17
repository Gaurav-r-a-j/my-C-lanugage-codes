/*
// you manage a travel agency and you want your drivers to input their following details.
1. Name
2. Drinving license NO
3. route 
4. kms

Your program should be able to take n as input and your drivers will start inputting their details one by one

your program should details of the drinvers in a beautiful fashion. */
//create a structure



#include <stdio.h>


typedef struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;

}dr;


int main()
{
    dr d1,d2,d3;
    printf("Enter the details of the Driver No.1 \n");

    printf("Enter the name of first driver\n");
    scanf("%s",&d1.name);

    printf("Enter the dlno of first driver\n");
    scanf("%s",&d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%s",&d1.route);

    printf("Enter the number of kms of first driver\n");
    scanf("%d",&d1.kms);


    printf("Enter the details of the Driver No.2 \n");

    printf("Enter the name of second driver\n");
    scanf("%s",&d2.name);

    printf("Enter the dlno of second driver\n");
    scanf("%s",&d2.dlNo);

    printf("Enter the route of second driver\n");
    scanf("%s",&d2.route);

    printf("Enter the number of kms of second driver\n");
    scanf("%d",&d2.kms);


    printf("Enter the details of the Driver No.3 \n");

    printf("Enter the name of third driver\n");
    scanf("%s",&d3.name);

    printf("Enter the dlno of third driver\n");
    scanf("%s",&d3.dlNo);

    printf("Enter the route of third driver\n");
    scanf("%s",&d3.route);

    printf("Enter the number of kms of third driver\n");
    scanf("%d",&d3.kms);


    printf("****printing indormation of these drivers:*****\n");

    printf("For Dirver NO1:\n Name is %s\n",d1.name);
    printf("DL number is %s\n",d1.dlNo);
    printf("route %s\n",d1.route);
    printf("kms %d\n",d1.kms);

    printf("For Dirver NO2:\n Name is %s\n",d2.name);
    printf("DL number is %s\n",d2.dlNo);
    printf("route %s\n",d2.route);
    printf("kms %d\n",d2.kms);

    printf("For Dirver NO3:\n Name is %s\n",d3.name);
    printf("DL number is %s\n",d3.dlNo);
    printf("route %s\n",d3.route);
    printf("kms %d\n",d3.kms);
    return 0;  
}
