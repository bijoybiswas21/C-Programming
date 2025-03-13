#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,root1,root2;
    printf("Enter Three Number:- ");
    scanf("%lf %lf %lf",&a,&b,&c);
    root1=(-b+sqrt(b*b-4*a*c))/(2*c);
    root1=(-b-sqrt(b*b-4*a*c))/(2*c);
    printf("\nFrist root is %lf",root1);
    printf("\nSecond root is %lf",root2);


    return 0;
}