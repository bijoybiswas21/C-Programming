#include<stdio.h>
int main(){
    int count=1;
    for(int r=4;r>=1;r--)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d\t",count++);
            /*/
            1   2   3   4    5
            6   7   8    9
            10  11  12
            13  14
            15
            
            
            
             */
        }
        printf("\n");
    }
    return 0;
}