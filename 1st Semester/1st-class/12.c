
/**
write a c program to display the following number series:
 A, B, C,D,.....Y,Z
**/

#include<stdio.h>
int main()
{
    char i;
    for(i = 'A'; i <= 'z'; i++)
        printf("%c\t",i);

    return 0;
}


