#include<stdio.h>
int main(){
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d ",c);
            /*
            1
            12
            123
            1234
            12345
            */
        }
        printf("\n");
    }
    return 0;
}