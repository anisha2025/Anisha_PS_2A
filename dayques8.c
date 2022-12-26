#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={4,6,7,3,1,9,2};
    int i,j,c=0,m,n;
    scanf(" %d",&m);
    scanf(" %d",&n);
    if(m>n)
    {
        for(i=0;i<m;i++)
        {
            c=1;
            for(j=0;j<n;j++)
            {
                if(a[i]==b[j])
                    c++;
            }

        if(c>1)
            printf("element %d found in both\n",a[i]);
        else
            printf("element %d found in only one\n",a[i]);
        }

    }
    else
        {
        for(i=0;i<n;i++)
        {
            c=1;
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                    c++;
            }

        if(c>1)
            printf("element %d found in both\n",a[i]);
        else
            printf("element %d found in only one\n",a[i]);
        }

    }
}
