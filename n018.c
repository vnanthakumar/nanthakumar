#include<stdio.h>
void main()
{
    int a,n,m,s=0,rem,i; 
    printf("enter a and n value");
    scanf("%d%d",&a,&n);
    for(i=a;i<n;i++)
    {
        while(n>0)
        {
            rem=n%10;
            s=s+rem*rem*rem;
            n=n/10;
            
        }
        if(m==s)
        {
            printf("armstrong");
    
        }
        else
        {
            printf("not armstrong");
        }
    }
}
