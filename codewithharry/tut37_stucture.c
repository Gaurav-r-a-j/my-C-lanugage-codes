// structure is a user defined datatypes (it is like list in python but its a userdefined)

// using structures allows us to combine data of diffrent types together.
// it is used to create a complex data type which contains diverese information.
//  they are very similar to array but structure can store data of any type, which is practically more useful

// syntax=
// struct [structure_name]
// {
//     //data_type var 1
//     //data_type var 2
//     //data_type var 3
// };

// we can access stuct elements using dot operator or called as sturture member operator

#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

} harry, ravi, shubham; // we can declare variable here too

int main()
{
    // struct Student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 234;
    ravi.marks = 434;
    shubham.marks = 334;

    harry.fav_char = 'y';
    ravi.fav_char = 'p';
    shubham.fav_char = 't';

    strcpy(harry.name, "Harry potter student of the year"); // copy the string in harry.name
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry's name is: %s\n", harry.name);

    return 0;
}

/*

Structure is a way to group variables 
Structure is a collection of dissimilar elements 
Defining structure means creating new data type

*/