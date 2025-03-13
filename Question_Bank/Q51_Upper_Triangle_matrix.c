#include<stdio.h>
#include<time.h>


int main()
{
    int mat[4][4],r,c,rand();
    srand(time(0));
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            mat[r][c]=rand()%9;
            if(r<c)
            {
                mat[r][c]=0;
            }
        }
    }
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("%d ",mat[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}