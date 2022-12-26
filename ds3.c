#include<stdio.h>
void main()
{
int i,j,m,n,a[100][100],b[100][100];
int C[100][100];
printf("enter the no of rows and column in matrix a");
scanf("%d%d",&m,&n);
printf("enter the elements in array 1");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
//
//printf("enter the number of rows and columns in matrix b");
//scanf("%d%d",&m,&n);
printf("enter the elements in array 2");
for(i=0;i<m;i++)
{
for (j=0;j<n;j++){
        scanf("%d",&b[i][j]);
}

}
printf("addition of matrices\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
C[i][j]=a[i][j]+b[i][j];

}}
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("%d",C[i][j]);
}
printf("\n");}
}

int k, d[100][100];
for (i=o;i<m;i++)
    for (j=0;j<n;j++)
        d[i][j]=0;
    for(k=0;k<m;k++)
{
    d[i][j]+=a[i][k]*b[k][j];
}
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&d[i][j]);
    }

