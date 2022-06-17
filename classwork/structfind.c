#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    int age;
    int marks[5];
} e[10];

int main()
{
    int i, j, found = 0;
    char ename[30];

    for (i = 0; i < 10; i++)
    {
        printf("Enter the id of student %d \n", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter the name of student %d \n", i + 1);
        scanf("%s", e[i].name);
        printf("Enter the age of student %d \n", i + 1);
        scanf("%d", &e[i].age);

        for (j = 0; j < 5; j++)
        {
            printf("Enter the marks of %d subject for student %d \n", j + 1, i + 1);
            scanf("%d", &e[i].marks[j]);
        }
    }

    printf("Enter the name of the student you want to search \n");
    scanf("%s", ename);

    for (i = 0; i < 10; i++)
    {
        if (strcmp(e[i].name, ename) == 0)
        {
            found = 1;
        }
    }

    if (found == 1)
    {
        printf("Student exist");
    }

    return 0;
}

