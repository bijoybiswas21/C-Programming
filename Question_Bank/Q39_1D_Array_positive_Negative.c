 #include<stdio.h>
int main(){
    int a[10],b=0,c=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter integer Number:- ");
        scanf("%d",&a[i]);
        if(a[i]>0)
        b=b+a[i];
        else if(a[i]<0)
        c=c+a[i];
    }
    printf("Total Positive %d\n",b);
    printf("Total Negative %d\n",c);
    return 0;
}