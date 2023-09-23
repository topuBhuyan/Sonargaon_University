
/*
write a c program to display the following series for loop:
SU,SU,SU,SU

a) 1,2,3, ... .... 15
b) 1,3,5  .. ..... 15
c) 2,4,6  .... ... 15
d) 3,6,9  .... ... 15
e) 15, 14,13  .... ... 3 ,2, 1
f) A,B,C  .... ... z
g) a,b,c  .... ... z
h) 1,4,9  .... ... 81,100
i) 1,8,27  .... ... 1000
j) 1,2,3  .... ... n
k) n,n-1,n-2  .... ... 2,1

**/

/** For Loop **/

#include<stdio.h>
int main()

{
    int i,n;

    //a) 1,2,3, ... .... 15
    printf("\n\n Result A \n-------------\n");
    for (i=1; i<=15; i++)
        printf("%d\t",i);

    //b) 1,3,5  .... ... 15
    printf("\n\n Result B \n-------------\n");
    for (i=1; i<=15; i= i+2)
        printf("%d\t",i);

    //c) 2,4,6  .... ... 15
    printf("\n\n Result C \n-------------\n");
    for(i=2; i<=15; i= i+2)
        printf("%d\t",i);

    //d) 3,6,9  .... ... 15
    printf("\n\n Result D \n-------------\n");
    for(i=3; i<=15; i= i+3)
        printf("%d\t",i);

    //e) 15, 14,13  .... ... 3 ,2, 1
    printf("\n\n Result E \n-------------\n");
    for(i=15; i>=1; i= i-1)
        printf("%d\t",i);

    //f) A,B,C  .... ... z
    printf("\n\n Result F \n-------------\n");
    for(i= 'A'; i<= 'Z'; i= i+1)
        printf("%c\t",i);

    //g) a,b,c  .... ... z
    printf("\n\n Result G \n-------------\n");
    for(i= 'a'; i<= 'z'; i= i+1)
        printf("%c\t",i);

    //h) 1,4,9  .... ... 81,100
    printf("\n\n Result H \n-------------\n");
    for(i= 1; i<=10; i++)
        printf("%d\t",i*i);

    //i) 1,8,27  .... ... 1000
    printf("\n\n Result I \n-------------\n");
    for(i= 1; i <= 10; i++)
        printf("%d\t",i*i*i);

    //j) 1,2,3  .... ... n
    printf("\n\n Result J \n-------------\n");
    printf("Enter the value :=");
    scanf("%d",&n);
    for(i=1; i <=n; i++)
        printf("%d\t",i);

    //k) n,n-1,n-2  .... ... 2,1
    printf("\n\n Result J \n-------------\n");
    printf("Enter the value:=");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
        printf("%d\t",i);

    //While Loop

    //a) 1,2,3, ... .... 15


    printf("\n\n Result A \n-------------\n");

    i = 1;
    while(i<=15)
    {
        printf("%d\t",i);
        i++;
    }

    //b) 1,3,5  .... ... 15
    printf("\n\n Result B \n-------------\n");


    i=1;
    while(i<=15)
    {
        printf("%d\t",i);
        i= i+2;
    }

    //c) 2,4,6  .... ... 14
    printf("\n\n Result C \n-------------\n");
    i=2;
    while(i<=15)
    {
        printf("%d\t",i);
        i= i+2;
    }

    //d) 3,6,9  .... ... 15
    printf("\n\n Result D \n-------------\n");
    i=3;
    while(i<=15)
    {
        printf("%d\t",i);
        i= i+3;
    }

    //e) 15, 14,13  .... ... 3 ,2, 1
    printf("\n\n Result E \n-------------\n");
    i=15;
    while(i>=1)
    {
        printf("%d\t",i);
        i= i-1;
    }

    //f) A,B,C  .... ... z
    printf("\n\n Result F \n-------------\n");
    i='A';
    while(i<= 'Z')
    {
        printf("%c\t",i);
        i++;
    }

    //g) a,b,c  .... ... z
    printf("\n\n Result G \n-------------\n");
    i='a';
    while(i<= 'z')
    {
        printf("%c\t",i);
        i++;
    }

    //h) 1,4,9  .... ... 81,100
    printf("\n\n Result H \n-------------\n");
    i=1;
    while(i<=10)
    {
        printf("%d\t",i*i);
        i++;
    }
    //i) 1,8,27  .... ... 1000
    printf("\n\n Result I \n-------------\n");
    i=1;
    while(i<=10)
    {
        printf("%d\t",i*i*i);
        i++;
    }

    //j) 1,2,3  .... ... n
    printf("\n\n Result J \n-------------\n");
    printf("Enter the value :=");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }

    //k) n,n-1,n-2  .... ... 2,1
    printf("\n\n Result k \n-------------\n");
    printf("Enter the value :=");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d\t",i);
        i--;
    }


    // do while loop

    {
        printf("\n\n Result A \n-------------\n");
        int i=1;
        do
        {
            printf("%d\t",i);
            i++;
        }
        while (i<=15);


        //b) 1,3,5  .... ... 15

        printf("\n\n Result B \n-------------\n");
        i = 1;
        do
        {
            printf("%d\t",i);
            i=i+2;
        }
        while (i <= 15);

        //c) 2,4,6  .... ... 15

        printf("\n\n Result C \n-------------\n");
        i = 2;
        do
        {
            printf("%d\t",i);
            i= i+2;
        }
        while (i <= 14);

        //d) 3,6,9  .... ... 15

        printf("\n\n Result D \n-------------\n");
        i = 3;
        do
        {
            printf("%d\t",i);
            i = i+3;
        }
        while(i<=15);

        //e) 15, 14,13  .... ... 3 ,2, 1

        printf("\n\n Result E \n-------------\n");

        i = 15;
        do
        {
            printf("%d\t",i);
            i = i-1;
        }
        while(i>=1);


//f) A,B,C  .... ... z
        printf("\n\n Result F \n-------------\n");
        i = 'A';
        do
        {
            printf("%c\t",i);
            i++;
        }
        while(i <= 'Z');

        //g) a,b,c  .... ... z
        printf("\n\n Result G\n-------------\n");
        i = 'a';
        do
        {
            printf("%c\t",i);
            i++;
        }
        while(i<= 'z');

        //h) 1,4,9  .... ... 81,100
        printf("\n\n Result H\n-------------\n");
        i = 1;
        do
        {
            printf("%d\t",i*i);
            i++;
        }
        while(i<=10);

        //i) 1,8,27  .... ... 1000
        printf("\n\n Result I\n-------------\n");
        i = 1;
        do
        {
            printf("%d\t",i*i*i);
            i++;
        }
        while(i<=10);

        //j) 1,2,3  .... ... n
        printf("\n\n Result J\n-------------\n");
        scanf("%d\t",&i);
        i=1;
        do
        {
            printf("%d\t",i);
            i++;
        }
        while(i<=1);

        //k) n,n-1,n-2  .... ... 2,1
        printf("\n\n Result k\n-------------\n");
        scanf("%d",&i);
        i=1;
        do
        {
            printf("%d\t",i);
            i--;
        }
        while(i>=1);


    }

    return 0;
}

