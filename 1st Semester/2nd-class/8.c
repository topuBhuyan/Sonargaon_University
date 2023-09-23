/**
write a c program to display following number series using for
, while and do .. while loop: 1,2,3,.....10
**/
#include<stdio.h>
int main()
{
    int i;
    printf("using for loop\n===================\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t",i);
    }
       printf("\n using while loop\n\n===================\n");
       i = 1;
       while(i <= 10)
       {
           printf("%d\t",i);
           i++;
       }
        printf("\n using do while loop\n\n===================\n");
        i = 1;
        do

        {
            printf("%d\t",i);
            i++;
        }while(i <= 10);
}
