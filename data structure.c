#include <stdio.h>
void main()
{int a[100],n,i,j,r;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements in array");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<n+1;j++)
{  if(a[0]==a[j])
   r=a[j];
}
printf("the element is %d",a[j]);
}
