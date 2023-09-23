/**

while loop

Q.write a c program to display the following number series using while loop: 1,2,3,4

**/
#include<stdio.h>

int main()

{
    int i;

    i=1; //initialization
      while(i<=4) //condition
      {
          printf("%d\t",i);
            i++;
      }

    return 0;
}

/**
Operational steps:

1.  when i = 1; i <= 4(T)
    Output: 1
    i = 1 + 1 = 1 + 1 = 2
2.  when i = 2; 2 <= 4(T)
    Output: 2
    i = 1 + 1 = 2 + 1 = 3
3. when i = 3; 3 <= 4(T)
    Output: 3
    i = 1 + 1 = 3 + 1 = 4
4. when i = 4; 4 <= 4(T)
    Output: 4
    i = 1 + 1 = 4 + 1 = 5
5. when i = 5; 5 <= 4(F) stop while loop


        output= 1,2,3
**/

