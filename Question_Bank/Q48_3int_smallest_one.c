#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter A Number:- ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("Smallest Number a=%d",a);
    }
    else if(b<a && b<c)
    {
        printf("Smallest Number b=%d",b);
    }
    else
    {
        printf("Smallest Number c=%d",c);
    }
    
    return 0;
}