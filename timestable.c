#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,result;
    printf("Which times-table would you like to display ?\n");
    scanf("%d",&n);

    i=1;
    while(i<=10)
    {
        result=n*i;
        printf("%d X %d = %d\n",n,i,result);
        i++;
    }

    return 0;
}
