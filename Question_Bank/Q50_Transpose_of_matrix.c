#include<stdio.h>

int main()
{
    int mat[2][2],trans[2][2],r,c;
    printf("Enter Matrix Elements:-\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&mat[r][c]);
        }
    }
    printf("Matrix Elements:-\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d ",mat[r][c]);
        }
        printf("\n");
    }
     for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            trans[c][r]=mat[r][c];
        }
    }

   printf("Transpose Elements:-\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d ",trans[r][c]);
        }
        printf("\n");
    }
    return 0;
}