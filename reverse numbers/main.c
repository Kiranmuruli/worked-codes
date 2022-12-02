#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,revrs,rem;
    printf("enter num\n");
    scanf("%d",&num);
    while(num!=0){
    rem=num%10;
    revrs=revrs*10+rem;
    num/=10;
    }
    printf("%d",revrs);
    return 0;
}
