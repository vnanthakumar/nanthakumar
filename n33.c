#include<stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 

    scanf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf(" the no. of spaces\n%d", count + 1);
}

   
