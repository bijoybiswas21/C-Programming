#include<stdio.h>
int main(){
    for(int r=5;r>=1;r--)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d ",r);   
            /*
            5 5 5 5 5
            4 4 4 4
            3 3 3
            2 2
            1
            */
        }
        printf("\n");
    }
    return 0;
}