/**
write a C program to red gender (m/f/M/F) and display corresponding gender  using switch.
**/
#include<stdio.h>
int main()
{
    char i;
    do
    {
        printf("\nEnter an alphabet:");
        scanf(" %c", &i);
        if((i >= 'A' && i<= 'Z') || (i >= 'a' && i <='z'))
        {


            if(i == 'a' || i == 'A' || i == 'e' || i == 'E' || i == 'i' || i == 'I' || i == 'o' || i == 'O' || i == 'u' || i == 'U')
                printf("%c is a VOWEL",i);
            else
                printf("%c is a CONSNAT\n",i);
        }
        else
        {
            printf("%c is an invalid character.\n",i);
        }
    }
    while(1);
    return 0;
}




