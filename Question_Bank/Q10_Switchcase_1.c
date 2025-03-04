#include<stdio.h>
int main()
   {
   	int a,b,n;
     
   	
   	printf("enter 2 ints:- ");
   	scanf("%d%d",&a,&b);
   	printf("enter ur choice:");
   	scanf("%d",&n);
   switch(n)
   {
    case 1:
    printf("%d+%d=%d",a,b,a+b);
    break;
    case 2:
    printf("%d-%d=%d",a,b,a-b);
    break;
    case 3:
    printf("%d*%d=%d",a,b,a*b);
    break;
    case 4:
    printf("%d/%d=%d",a,b,a/b);
    break;
    default:
    printf("invalid choice");
   }
	return 0;
   }