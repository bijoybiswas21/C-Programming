#include<stdio.h>
int main(){
    int a[10],b=0,c=0,d=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter integer Number:- ");
        scanf("%d",&a[i]);
        if(a[i]>0)
        b++;
        else if(a[i]<0)
        c=c++;
        else
        d++;
    }
    printf("%d %d %d",b,c,d);
    
    return 0;
}