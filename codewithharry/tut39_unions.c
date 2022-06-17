// unions is similar to structure.
// union is like sharing is caring 
// syntax is simiilar to sturcture and almost same
// Union is a user defined data type 
// The difference between structures and unions lies in the fact that in structure, each member has its own storage location, whereas members of a union used a single shared memory location.

// this is single shared memory leocation is equal to the size of its largest data member;
// take the maximum assign memory


#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union Student s1;
    s1.id =1;
    s1.marks =343;
    s1.fav_char ='e';
    strcpy(s1.name,"Harry");


    printf("The id is %d \n",s1.id);
    printf("The marks is %d \n",s1.marks );
    printf("The fav_char is %c \n",s1.fav_char);
    printf("The name is %s\n", s1.name);


    //everyvalue get corrupted when converted to union only name is true or can say the last item will print same other will corrupt
    
    return 0;
}
