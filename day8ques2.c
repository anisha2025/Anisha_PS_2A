#include<stdio.h>
#include<math.h>
void main()
{
int a,b,k,count=0,r;
printf("enter the no. and the power");
scanf("%d%d",&a,&b);
printf("enter the digit to be printed");
scanf("%d",&k);
int p=pow(a,b);
while(p >0 && count<k)
{
    r=p%10;
    count++;
    if(count==k)
    {
        printf("%d",r);
    }
    p=p/10;
    }
}
