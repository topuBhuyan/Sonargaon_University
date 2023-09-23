/*
write a c program too display your 3 times using for loop?
*/

#include<stdio.h>
int main ()
{
    int i;
    for(i = 1; i<= 30; i++)
    {
        printf("%d topu bhuyan\n",i);
    }

    return 0;
}

/**
operational steps:
-------------------
1. when i = 1; 1<= 3 (true); i = i + 1 = 1 + 1 = 2
    output: topu bhuyan
2. when i = 2; 2<= 3 (true); i = i + 1 = 2 + 1 = 3
        output: topu bhuyan
3. when i = 3; 3 <= 3 (true); i= i + 1 = 3 + 1 = 4
            output:topu bhuyan
4. when i = 4 ; 4 <= 3; (falas);
***/
