#include<stdio.h> 



int main()
{
    int a[3][3],b[3][3],add[3][3]; //r,c is rows and coloumn.
    printf("Enter The 1st matrix:-");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    
    printf("Enter The 2nd matrix:-");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }
    printf("The is 1st  matrix is:-\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
      printf("The is 2nd  matrix is:-\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d\t",b[r][c]);
        }
        printf("\n");
    }

    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            add[r][c]=a[r][c]+b[r][c];
        }
        
    }

    
    printf("Sum of Matrix is:-\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d\t",add[r][c]);
        }
        printf("\n");
    }
    return 0;
}