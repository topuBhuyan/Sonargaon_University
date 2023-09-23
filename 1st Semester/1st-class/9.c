/**
write a c program to display thee following number series:
1,2,3,4 ...... n
**/

#include <stdio.h>
int main ()
{
    int i, n;
    do

    {
        printf("enter the value of n: ");
        scanf("%d",&n);
        for(i = 1; i<= n; i ++)
       {
            printf("%d\t",i);
       }
        printf("\n");


        } while (1);
          return 0;

}




