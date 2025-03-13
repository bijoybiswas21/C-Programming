#include<stdio.h>
int main(){
    for(int r=1;r<=5;r++)
    {
        for(int c=5;c>=r;c--)
        {
            printf("%d ",r);   
            /*
            11111
            2222
            333
            44
            5
            */
        }       
        printf("\n");
    }
    return 0;
}