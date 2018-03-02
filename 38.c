#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a value");
    scanf("%d",&a);
    printf("\t enter value b\n");
    scanf("%d",&b);
    a=a^b;
b=b^a;
a=b^a;

    printf("%d",a);
    printf("\t%d",b);
    
}
