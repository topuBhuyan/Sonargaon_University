/**
write a C program to red gender (m/f/M/F) and display corresponding gender  using switch.
**/
#include<stdio.h>
int main()
{
    char gender;
    do{
    printf("Enter your gender: ");
    scanf(" %c",&gender);

    if(gender == 'm' || gender == 'M')
        printf("Male\n");
    else if(gender == 'f' || gender == 'F')
        printf("Female\n");
    else
        printf("Unspecified gender.\n");
    }while(1);

    return 0;
}




