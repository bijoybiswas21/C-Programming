#include<stdio.h>
int main()
{   int a[7],temp,i,j;
    printf("Enter Array Element:- ");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);

    }    
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]>a[j]  )
            {
                temp=a[i];    //swap concept
                a[i]=a[j];
                a[j]=temp;    
            }
        }
    }
     printf("Array Element:- ");
    for(i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    } 
     return 0;
} 