/**

while loop

Q.write a c program to display the following number series using while loop: 1,2,3..........10?
n,n-1,n-2,9,8.........2,1?

    for(i=n; i>=1; i--)

**/
#include<stdio.h>

int main()

{
   int i,n;
   printf("enter the value of n:"); scanf("%d",&n);
   i = n;
   while(i>= 1)
   {
       printf("%d\t",i);
       i--;
   }

    return 0;
}




