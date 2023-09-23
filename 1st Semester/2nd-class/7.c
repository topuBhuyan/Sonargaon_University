/**

do while loop

Q.write a c program to display the following number series using do while loop: A,B,C,..........Z
**/
#include<stdio.h>

int main()

{
    printf("without using ACII Values:\n");
    printf("----------------------\n");
   char i = 'A';
   do
   {
       printf("%c\t",i);
       i++;
   }while(i <= 'Z');

   printf("\n without using ACII Values:\n");
    printf("----------------------\n");
   int j = 65;
   do
   {
       printf("%c\t",j);
       j++;
   }while(j <= 90);


    return 0;
}

/**


**/

