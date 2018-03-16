#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count6=1;
            break;
        }
    }
    if(count==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
