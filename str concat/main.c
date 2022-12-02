#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char str1[20],str2[10],str3[100],n;
    printf("enter str1\n");
    scanf("%s",str1);
    printf("enter str2\n");
    scanf("%s",str2);

    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
        j++;
    str1[j]=str2[i];
    j++;
    i++;
    str1[i]=!'\0';
    printf("%s\n",str3);

    return 0;
}
