#include<stdio.h>
int main(){
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=9;c++)
        {
            if(c+r==5 || c-r==3 || r==5)
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