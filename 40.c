#include<stdio.h>
void main()
{
int f1=0,f2=1,n,i,c;
printf("enter a number\n");
scanf("%d\n",&n);
printf("%d%d\n",f1,f2);
for(i=1;i<n;i++)
{
c=f1+f2;
f1=f2;
f2=c;
printf("%d\n",c);
}
}
