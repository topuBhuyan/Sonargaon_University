/**

do while loop

Q.write a c program to display the following number series using do while loop: 1,2,3..........10?

**/
#include<stdio.h>

int main()

{
    int i =1;
    do
    {
        printf("%d\t",i);
        i++;
    }while(i <= 10);

    return 0;
}

/**
syntax of do...while loop
--------------------------
{
    statement(s);
    increment/decrement;
} while(condition);

**/

