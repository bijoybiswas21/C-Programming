#include <stdio.h>
 
int main()
{
    int eng, phy, chem, math, comp,total; 
    float  average, percentage;
 
    printf("Enter marks of five subjects: :- ");
    scanf("%d%d%d%d%d", &eng, &phy, &chem, &math, &comp);
 
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %d\n", total);
    printf("Average marks = %f\n", average);
    printf("Percentage = %f", percentage);
 
    return 0;
}
