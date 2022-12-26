#include<stdio.h>
void main()

{
int num,c=0;
scanf("%d",&num);
while(num!=0)
{
    if(num%2==0)
        {
            num=num/2;
            c++;
            }
    else
{
    num=num-1;
    c++;
}
}
printf("%d",c);
}
