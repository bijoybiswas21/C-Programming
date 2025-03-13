#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter A Number:- ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("Largest Number a=%d",a);
    }
    else if(b>a && b>c)
    {
        printf("Largest Number b=%d",b);
    }
    else
    {
        printf("Largest Number c=%d",c);
    }
    
    return 0;
}