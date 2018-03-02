#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a value");
    scanf("%d",&a);
    printf("\t enter value b\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d",a);
    printf("\t%d",b);
    
}
