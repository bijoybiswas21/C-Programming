#include<stdio.h>
#include<string.h>

 int main()
{   
    char str[]="C-Programming";
    int len;
    len=strlen(str);

    for(int r=0;r<len;r++)  //rows
    {
        for(int c=0;c<=r;c++) //colume
        {
            printf("%c ",str[c]);
            /*
            B
            BI
            BIJ
            BIJO
            BIJOY*/
        }    
        printf("\n");
        
    }

    return 0;
}