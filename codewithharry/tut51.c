//create a parser
#include <stdio.h>

int main()
{
    char string[]= "<h1> thisis a heading </h1>";
    parser(string);
    return 0;
}

/*
input
<h1> this is a heading </h1>

extract the text and remove the spaces from start and end and tags too

output
this is a heading

*/