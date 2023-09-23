
/*
write a c program too display your 1, 2, 3 for loop.
*/

#include<stdio.h>
int main ()
{
    int i;
    for(i = 1; i<= 20; i = i + 1)
    {
        printf("%d\n",i);
    }

    return 0;
}

/**
operational steps:
-------------------
1. when i = 1: 1 <= 3 (true); i = i + 1 = 1 + 1 = 2;
    output: 1
2. when i = 2; 2 <= 3 (true); i = i + 1 = 2 + 1 = 3;
        output:2
3.when i = 3; 3 <= 3 (true);  i = i + 1 = 3 + 1 = 4;
            output: 3
4.when i = 4; 4 <= (f);
                stop for loop
***/
