/**

while loop

Q.write a c program to display the following number series using while loop: 1,2,3..........10?

**/
#include<stdio.h>

int main()

{
    int i;

    i=1; //initialization
      while(i<=10) //condition
      {
          printf("%d\t",i);
            i++;
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
