#include<stdio.h>
int main()
   {
   	int n;
     
	printf("Enter Any Choice Num :- ");
   	scanf("%d",&n);
   	
   switch(n)
   {
    case 1:
    printf("Sunday");
    break;
    case 2:
    printf("Monday");
    break;
    case 3:
    printf("Tuesday");
    break;
    case 4:
    printf("Wednesday");
    break;
    case 5:
    printf("Thuesday");
    break;
    case 6:
    printf("Friday");
    break;
    case 7:
    printf("Saterday");
    default:
    printf("invalid choice");
   }
	return 0;
   }