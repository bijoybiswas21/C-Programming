#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    for(int r=1;r<=n;r++)
    {
        for(int s=n;s>r;s--)
        {
            
            printf(" ");
            
        }
        for(int c=1;c<=r;c++)
        {
            printf("* ");
              /* 
                    *
                   * *
                  * * *
                 * * * *
                * * * * * 
              */

        }
        
        printf("\n");
    }
    return 0;
}