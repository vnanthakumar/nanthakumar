#include<stdio.h>
void main()
{
   int a,b,sum=0;
   scanf("%d%d",&a,&b);
   sum=a+b;
   if(sum%2!=0)
   {
       printf("%d\nodd",sum);
   }
   else
   {
       printf("%d\neven",sum);
   }
}
  
