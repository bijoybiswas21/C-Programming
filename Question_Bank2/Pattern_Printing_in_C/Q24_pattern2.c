#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number:- ");
    scanf("%d",&n);

    for(int r=1;r<=n;r++)
    {
        for(int c=n;c>=1;c--)
        {
            printf("* ");
            /*
              *****
              ****
              ***
              **
              *
              */
        }
        printf("\n");
    }
    return 0;
}