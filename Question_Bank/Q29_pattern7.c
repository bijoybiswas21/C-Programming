#include<stdio.h>
int main()
{
    for(int r=1;r<=5;r++)
    {
        for(int s=5;s>r;s--)
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