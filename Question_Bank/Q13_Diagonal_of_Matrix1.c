#include<stdio.h>
int main(){
    int a[3][3];
    printf("Enter The Elements Of Matrix:- ");
    printf("\n-------------------------------------\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("Enter The a[%d][%d] Element:",r,c);
            scanf("%d",&a[r][c]);
            printf("\n");
        }
    }
    printf("\nThe Matrix we have\n");
    printf("----------------------------------------\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d\t",a[r][c]);     
        }
        printf("\n");
    }
    printf("\n----------------------------------------\n");
    printf("The Diagonal Matrix is:\n");
     for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(r==c)
            printf("%d\t",a[r][c]);
            else
            printf("0\t");   
        }
        printf("\n");
        
    }
    return 0;
}