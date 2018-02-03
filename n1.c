#include<stdio.h>
int main()
{
    int a;
    printf("enter a year\n");
    scanf("%d\n", &a);
if(a%4 == 0)

        printf(" Leap Year\n"); 
    else
        printf("Not leap year\n");

return 0;
}
