#include <stdio.h>

// int main(){

//     // Types of if statement 
// //     1- if statement
// //     2- if else statement 
// //     3- if else if ladder 
// //     4-nested if 
//     // int age;
//     // printf("Enter your age \n");
//     // scanf("%d", &age);
//     // printf("you've entered %d as you age\n",age);
//     // if (age>=18)             
//     // {
//     //     printf("You can vote\n");
//     // }
//     // else if (age==6){
//     //     printf("you are 6 years old \n");
//     // }
 
//     // else if(age>10){
//     //     printf("You are b/w 10 to 18 and you can,t vote\n");
//     // }

//     // else{
//     //     printf("You cann't vote!\n");
//     // }
    



//     return 0;

    
// }


int main(){

   int a;
   printf("Enter 1 if you have passed maths or science only.\n");
   printf("Enter 2 if you have passed maths and science both.\n");
   scanf("%d",&a);

   if (a==1)
   {
       printf("You got 15rs for this ");
   }

   else if (a==2)
   {
       printf("You got 45rs for your hard work.");
   }

   else
   {
       printf("You got choclater");
   }
   
   
   


    return 0;
}