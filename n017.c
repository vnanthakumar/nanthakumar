#include<stdio.h>
void main()
{
    int s=0,n,n1,remainder;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        remainder=n%10;
        s=s+(remainder*remainder*remainder);
        n=n/10;
        
    }
    if(n1==s)#include<stdio.h>
void main()
{
    int s=0,n,n1,remainder;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        remainder=n%10;
        s=s+(remainder*remainder*remainder);
        n=n/10;
        
    }
    if(n1==s)
    {printf("armstrong");
    }
    else
    {
        printf("not");
    }
    
}
    {printf("armstrong");
    }
    else
    {
        printf("not");
    }
    
}
