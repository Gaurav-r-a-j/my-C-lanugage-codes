#include <stdio.h>
// // typedef <previous_name> <alias_name>;(alias name means new name)
// //typedef is used to give nickname

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

} // this is previous name
std; // this is new name
int main()
{
    // int *a ,b;// one pointer and one int
    typedef int *intPointer; // giving nickname to int* and now we give addreass like below
    intPointer a, b;         // now both are pointers
    int c = 23;
    a = &c;
    b = &c;

    // // struct  Student s1, s2;
    // std s1,s2;// new name
    // s1.id = 34;
    // s2.id =45;

    // // typedef <previous_name> <alias_name>;(alias name means new name)
    // //typedef is used to give nickname
    // //real use of typedef
    // typedef unsigned long ul;
    // ul li,l2,l3;

    // printf("Value of s1's Id is %d\n",s1.id);
    // printf("Value of s2's Id is %d\n",s2.id);

    return 0;
}
