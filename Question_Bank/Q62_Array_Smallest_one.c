#include<stdio.h>
int main(){
    int a[10],s;
    for(int i=0;i<10;i++)
    {
        printf("Enter integer Number:- ");
        scanf("%d",&a[i]);
    }
       s==a[0];
       for(int i=0;i<10;i++)
       if(a[i]<s)
       s=a[i];

    printf("The Number is %d",s);
    
    return 0;
}