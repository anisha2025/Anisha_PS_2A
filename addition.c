#include<stdio.h>
void main()
{
    int i,j,a[20][20],b[20][20],c[20][20],m,n;
    printf("addition of matrices\n");
    scanf("%d",&m);
    scanf("%d",&n);
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];

}}
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("%d",c[i][j]);
}
printf("\n");}}
