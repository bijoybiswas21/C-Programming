#include<stdio.h>
 int main(){
    char ch;
    printf("Enter Any Alphabet:- ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    printf("it is a vowel");
    else
    printf("it is a consonant");

    return 0;
    
}