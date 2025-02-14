#include<stdio.h>
int main(){
    int n;
    printf("Enter Any Number:- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d \n",i);
    }
    for(int i=n;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}