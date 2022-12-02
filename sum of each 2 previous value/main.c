#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[50];
    printf("enter values!");

    for(i=0;i<4;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=4;i<50;i++)
    {
        arr[i]=(arr[i-2])+(arr[i-4]);
    }
    for(i=0;i<50;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
