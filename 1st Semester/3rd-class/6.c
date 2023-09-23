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

        if ((i >= 'A' && i<='Z') || (i >= 'a' && i<='z'))
        {
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
            default:
                printf("%c is a CONSONAT\n",i);
            }
        }
        else
        {
            printf("%c is an invalid character.\n",i);
        }
    }
    while(1);

    return 0;
}


