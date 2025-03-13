#include<stdio.h>
int main(){
    int co1,co2;
    printf("Enter a Value for X and Y coordinate: ");
    scanf("%d %d",&co1,&co2);
    if(co1 > 0 && co2 > 0 ) //4,5(+,+)
    printf("The coordinate point (%d,%d) Lies in the 1st quadrant",co1,co2);
    else if(co1 < 0 && co2 > 0 )  //-4,5(-,+)
    printf("The coordinate point (%d,%d) Lies in the 2nd quadrant",co1,co2);
    else if(co1 < 0 && co2 < 0 )   //-4,-5(-,-)
    printf("The coordinate point (%d,%d) Lies in the 3rd quadrant",co1,co2);
    else if(co1 > 0 && co2 < 0 )   //4,-5(+,-)
    printf("The coordinate point (%d,%d) Lies in the 4th quadrant",co1,co2);
    else if(co1 == 0 && co2 == 0 )
    printf("The coordinate point (%d,%d) Lies at the origin",co1,co2);
    return 0;
}