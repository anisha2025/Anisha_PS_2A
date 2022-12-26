#include<stdio.h>
void main()
{
int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int i,j,n,c=0;
    scanf("%d",&n);
printf("  repeated elements are \n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                printf(" %d \n", arr[j]);
                c++;
        }
    }

}

