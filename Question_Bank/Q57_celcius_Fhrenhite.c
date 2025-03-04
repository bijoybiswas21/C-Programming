//Implement a C program to convert Celsius to Fahrenheit besed on user input
//Celcius to Frahanat 
#include<stdio.h>  
    int main()   
   {   
     float fahrenheit, celsius;  
     printf("Enter A celcius Num:- ");
     scanf("%f",&celsius); 
     fahrenheit =( (celsius*9)/5)+32;  
     printf("\n Temperature in fahrenheit is:- %f",fahrenheit);  
     return (0);  
    }  
//Fahrenheit to Celcius
/*#include<stdio.h>  
    int main()   
   { 
     float Fahrenheit, Celsius;  
     Fahrenheit = 64;  
     Celsius = ((Fahrenheit-32)*5)/9;  
      printf("\nTemperature in Celsius is :- %f",Celsius);  
      return (0);  
    }  */



//Both Switch Statement Using 
/*#include<stdio.h>

int main() {
    

    float a, b, celsius, fahrenheit;
    int x;
    printf("Press 1 For Convert Fahrenheit To Celsius\n");
    printf("Press 2 For Convert Celsius To Fahrenheit\n");
    printf("\nEnter Your Choice: ");

    scanf("%d", & x);

    switch (x) {
    case 1:
        printf("\nEnter The Temperature in Fahrenheit: ");
        scanf("%f", & a);
        celsius = 5 * (a - 32) / 9;
        printf("\n\nCelsius Temperature is: %f ", celsius);
        break;
    case 2:
        printf("\nEnter The Temperature in Celsius: ");
        scanf("%f", & b);
        fahrenheit = ((9 * b) / 5) + 32;
        printf("\n\nFahrenheit Temperature is: %f ", fahrenheit);
        break;
    default:
        printf("\n\nWrong Choice.....Try Again!!!\n");
    }
    return 0;
}    
*/