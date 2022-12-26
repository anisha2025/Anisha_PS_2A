#include<stdio.h>
void main()
{
int a,b,i,pow=1;
printf("enter the base and the power");
scanf("%d%d",&a,&b);
for (i=1;i<=b;i++)
{pow=pow*a;
}
printf("%d",pow);
}
