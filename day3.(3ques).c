#include<stdio.h>
void main()
{
	float x,sum,r;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; r = 1;
	for (i=1;i<n;i++)
	{
	  r = (r*x/(float)i);
	  sum =sum+ r;
	}
	printf("sum is %d",sum);
}
