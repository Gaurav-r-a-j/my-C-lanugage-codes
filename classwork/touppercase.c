
#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i;
   printf("\nEnter the string to convert to uppercase: ");
   gets(str);
   for (i = 0; str[i]!='\0'; i++) {
     /* if the characters are in lower case, convert them to
        upper case by subtracting 32 from their ASCII value. */
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("\nThe string in upper case = %s", str);
   return 0;
}