
/**
write a c program to display the following number series:
 n, n-1, n-2,.....3,2,1
**/
#include<stdio.h>
int main()
{
    int i,n;
    do
    {
        printf("\nEnter a number:");
        scanf("%d", &n);
        for(i = n; i >= 1; i--) printf("%d\t",i);
    }while (1);


    //for(i = 99; i>=1; i = i- 1)
    //printf("%d\t",i);


    return 0;
}

