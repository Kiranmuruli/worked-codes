#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  num, binary, decimal = 0, base = 1, rem;
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num);
    binary = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n",binary);
    printf("Its decimal equivalent is = %d \n",decimal);
}
