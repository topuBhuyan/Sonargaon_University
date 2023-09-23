/**

while loop

Q.write a c program to display the following number series using while loop: 10,9,8.........2,1?
**/
#include<stdio.h>

int main()

{
    int i = 10; //variable declaration initialization
    while(i>=1)
    {
        printf("%d\t",i);
        i--;
    }

    return 0;
}

/**
syntax of for loop:
-------------------
for(initialization: condition : increment/decrement)
{
    statement(s);
}
syntax of while loop:
---------------------
initialization ;
while(condition)
{
statement(s);
increment/decrement;
}
**/

