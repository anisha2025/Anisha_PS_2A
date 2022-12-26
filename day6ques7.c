#include<stdio.h>
void main()
{
    int a[10],num=0,m,i;
    scanf("%d",&m);
    for (i=0;i<m;i++)
        {
            scanf("%d",a[i]);
        }
    for (i=0;i<m;i++)
            {
                num^=a[i];
            }
printf("%d",num);
}












