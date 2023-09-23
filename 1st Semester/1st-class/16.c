
/**
write a c program to display the following serieses:
1,2,3, ... .... 15
1,3,5  .... ... 15
2,4,6  .... ... 15
3,6,9  .... ... 15
15, 14,13  .... ... 3 ,2, 1
A,B,C  .... ... z
a,b,c  .... ... z
1,4,9  .... ... 01,100
1,8,27  .... ... 1000
1,2,3  .... ... n
n,n-1,n-2  .... ... 2,1

**/

#include<stdio.h>
int main()
{
    int i,n;

    //1,2,3, ... .... 15
    printf("series 1:\n");
    printf("----------\n");
    for (i = 1; i <= 15; i++)
        printf("%d\t",i);

    //1,3,5  .... ... 15
    printf("\nSeries 2:\n");
    printf("----------\n");
     for(i = 1; i <= 15; i = i + 2)
        printf("%d\t",i);

    //2,4,6  .... ... 15
    printf("\nSeries 3:\n");
    printf("----------\n");
     for(i = 2; i <= 14; i = i + 2)
        printf("%d\t",i);

    //3,6,9  .... ... 15
    printf("\nSeries 4:\n");
    printf("----------\n");
     for(i = 3; i <= 15; i = i + 3)
        printf("%d\t",i);

    //15,14,13  .... ... 3 ,2, 1
    printf("\nSeries 5:\n");
    printf("----------\n");
     for(i = 15; i >= 1; i = i - 1)
        printf("%d\t",i);

        //A,B,C  .... ... z
        printf("\nSeries 6:\n");
        printf("*************\n");
        char j;
        for(j = 'A'; j <= 'Z'; j++)
            printf("%c\t",j);

        //a,b,c  .... ... z
        printf("\nSeries 7:\n");
        printf("*************\n");
        for (i = 97; i <= 122; i++)
            printf ("%c\t", i);

            //1,4,9  .... ... 81,100
             printf("\nSeries 8:\n");
            printf("*************\n");
            for (i = 1; i <= 10; i++)
                printf("%d\t", i*i);

        //1,8,27  .... ... 1000
         printf("\nSeries 9:\n");
            printf("*************\n");
            for (i = 1; i <= 10; i++)
                printf("%d\t", i*i*i);

            //1,2,3  .... ... n
            printf("\nSeries 10:\n");
            printf("*************\n");
            printf("Enter the value of n: ");
            scanf("%d", &n);
            for(i = 1; i <= n; i++)
            printf("%d\t",i);

            //n,n-1,n-2  .... ... 2,1
            printf("\nSeries 10:\n");
            printf("*************\n");
            printf("Enter the value of n: ");
            scanf("%d", &n);
            for(i = n; i >= 1; i--)
            printf("%d\t",i);



    printf("\n\n");
    return 0;
}





