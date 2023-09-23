/**
write a C program to red gender (m/f/M/F) and display corresponding gender  using switch.
**/
#include<stdio.h>
int main()
{
    char gender;
    do{
    printf("Enter your gender :");
    scanf(" %c",&gender);

    switch(gender)

    {
    case 'm':
    case 'M':
        printf("Male\n");
        break;
    case 'f':
    case 'F':
        printf("female\n");
        break;
    default:
        printf("Unspecified gender.\n");
    }
    }while(1);

    return 0;
}



