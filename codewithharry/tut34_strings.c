// /*
// there is no datatype as string in c .

// we have char,int,float and other data types but no string data type in case
// string is not a supported data type in C but it is a very useful concept used to model real word entities like name,city etc.

// we express strings using an array of characters terminated by a null character('\0')

// \0 = string termination character

// we can make a character array for string but we also have to give null character. so we always need string size + 1 for a character array to be a string
// */

// // string = array of characters terminated by NULL character 
// // it is created  by creating an array of characters
// // We also need an extra character ('\0' or null character) to tell the compiler that the string ends here.

// // two ways to create
// // ex 1- char name[]= "harry";//if we use double quotes then we don't need to give null character it is automatically done by complier
// // ex 2- char name[]={'h','a','r','r','y','\0'};



// // //how to take strins as input
// // char str[54];//step1- definge character array of wanted lenght
// // gets(str);//step2- this is used to take string as input and also have predefined null character

// // // printf("%s",str); //we can print string using %s format specifier or
// // puts(str);//by using this too
    
// // //all name is offered by header file stdio.h

// #include <stdio.h>

// // function to print string 
// void printStr(char str[])
// {
//     int i=0;
//     while (str[i]!='\0')       
//     {
//         printf("%c",str[i]);
//         i++;
//     }
//     printf("\n");
// }


// int main()
// {
//     // char str[]={'h','a','r','r','y','\0'};
//     // char str[6]= "harry";
//     char str[33];
//     gets(str);//this is best alternative for scanf

//     printf("Using custom function printStr\n");
//     printStr(str);

//     printf("Using printf fucntion \n%s\n",str);

//     printf("using puts function: \n");
//     puts(str);
    
//     return 0;
// } 

// /*
// string
// Sequence of characters teminated at null character (\0)
// ASCII code of null character is 0(zero)
// %s is used to print full string at once
// puts(arrayname);//automaticallly chages line too

// we can give array string in double quotes " ".


// String Related Functions--(take string address as arguement)
// strlen()
// strrev()
// strlwr() =upper case to lowercase
// strupr() = lower case to upper case
// strcpy() = first aguement is array second is value
// strcmp() = (mismatch character difference) to copare to characters, return 0 if same
// strcat() = append strings
// strncat() = append strings takes third arguement as no.of characters
// fgets() = used to take string as input
//scanf() and gets() = both used to take input as string but these two have butter overflow problem means if the size of array if less for the string still it will take the whole string and get some extra memory after the array size
// %4s =we can give format specifier like this 

// putchar() = to print 1 character
// puts = its like a block element 
// %.5s = we can use format specifier like this to print the no. of lenght you want to print



// */


#include <stdio.h>
//function to reverse of a string
char *reverse(char *p){
    int l , i;
    char ch;
    for  (l = 0;*(p+l)!='\0'; l++);
    for ( i = 0; i < l/2; i++)
    {
       ch = *(p+i);
       *(p+i)= *(p+l-1 -i);
       *(p+l-1 -i) = ch;
    }

    printf("%s",p);

    }
    

int main()
{
    // printf("%s",reverse("Computer"));
    reverse("Computer"); 
    return 0;
}
