#include<stdio.h>
int main(){
    float PerHeight;
    printf("Enter The Height of the Person (in cemtimetres):-");
    scanf("%f",&PerHeight);
    if(PerHeight<150.0 )
    printf("The Person is Dwarf .\n");
    else if((PerHeight >= 150.0) && (PerHeight <165.0))
    printf("The Person is average heighted \n");
    else if((PerHeight >= 165.0) && (PerHeight <=195.0))
    printf("The Person is taller \n");
    else
    printf("Adnormal Height. \n");
    return 0;
}