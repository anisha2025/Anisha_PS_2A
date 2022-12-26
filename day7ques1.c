#include<stdio.h>
#include<string.h>
void main()
{
char str[500];
int l,n,c=0;
printf("string to check");
gets(str);
n=strlen(str);
for(l=0;l<n/2;l++)
{
    if(str[l]==str[n-l-1])
    c++;
}
if(c==1)
{
    printf("palindrome");
}
else
    printf("not a palindrome");
}


