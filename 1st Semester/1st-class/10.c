
/**
write a c program to display the following number series:
 100, 99, 98,.....3,2,1
**/
#include <stdio.h>
int main()
{
    int i;
    for(i = 99; i>=1; i = i- 1)
        printf("%d\t",i);


    return 0;
}
