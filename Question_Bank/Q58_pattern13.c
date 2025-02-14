#include<stdio.h>
int main(){
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=r;c++)
        {
            if(c==1 || c==r || r==5)
            {
                printf("*");
            }
            else{
                printf(" ");
                /*
                *
                * *
                *   *
                *     *
                * * * * *
                  */
            }
        }
        printf("\n");
    }
    return 0;
}