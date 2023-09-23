/**
write a C program to check whether an alphabet is VOWEL or CONSONAT using switch.
**/
#include<stdio.h>
int main()
{
    char i;
    do
    {
        printf("\nEnter an alphabet: ");
        scanf(" %c",&i);
        switch(i)
        {
        case  'A':

        case  'E':

        case  'I':

        case  'O':

        case  'a':

        case  'e':

        case  'i':

        case  'o':

        case  'u':
            printf("\n%c is a VOWEL.\n",i);
            break;
        case  'B':
        case  'b':
        case  'c':
        case  'C':
        case  'd':
        case  'D':
        case  'F':
        case  'f':
        case  'g':
        case  'G':
        case  'H':
        case  'h':
        case  'J':
        case  'j':
        case  'K':
        case  'L':
        case  'M':

            printf("\n%c is a CONSPMAT\n",i);
            break;
        default:
            printf("%c is an invalid character.\n",i);
        }
    }
    while(1);

    return 0;
}

