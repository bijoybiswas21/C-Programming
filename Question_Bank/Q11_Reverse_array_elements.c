#include<stdio.h>
int main()
{   int a[6],i;
    printf("Enter Array Element:- ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse Array Element:- ");
    for(i=5;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

}