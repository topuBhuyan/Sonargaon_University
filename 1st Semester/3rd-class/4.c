/**
write a C program to check whether an alphabet is VOWEL or CONSONAT using switch.
**/
#include<stdio.h>
int main()
{
    char i;
    printf("Enter an alphabet: ");
    scanf("%c",&i);
    switch(i)
    {
    case  'A':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'E':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'I':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'O':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'a':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'e':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'i':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'o':
        printf("%c is a VOWEL.\n",i);
        break;
        case  'u':
        printf("%c is a VOWEL.\n",i);
        break;

    default :
        printf("%c is a CONSONANT\n",i);
    }

    return 0;
}
