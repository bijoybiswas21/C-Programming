#include<stdio.h>
int main(){
    int a[10];
    float b[10],c[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter one float:- ");
        scanf("%f",&b[i]);
        c[i]=b[i]-a[i];

    }
    for(int i=0;i<10;i++)
    printf("%f %f %d\n",b[i],c[i],a[i]);

    return 0;

}