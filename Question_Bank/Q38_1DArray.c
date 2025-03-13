#include<stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter Number:- ");
        scanf("%d",&a[i]);
    }

    for( i=0;i<9;i++){
         printf("%d ",a[i]);

    }
    printf("\n");
   
    for( i=8;i>=0;i--){
         printf("%d ",a[i]);
    }
    return 0;
}