#include<stdio.h>
int main(){
    int n,a,r,s=0;
    printf("Enter Any Number:- ");
    scanf("%d",&n);
    a=n;
    do
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }  while(n!=0);
    
    if (a==s)
    {
         printf("Palindrome Number");
    }
    else
    {
         printf(" Not Palindrome Number");
    }
   
    return 0;
}
