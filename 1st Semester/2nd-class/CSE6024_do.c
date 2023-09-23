
/**
write a c program to display the following series do while loop:
SU,SU,SU,SU

a) 1,2,3, ... .... 15
b) 1,3,5  .... ... 15
c) 2,4,6  .... ... 15``
d) 3,6,9  .... ... 15
e) 15, 14,13  .... ... 3 ,2, 1
f) A,B,C  .... ... z
g) a,b,c  .... ... z
h) 1,4,9  .... ... 81,100
i) 1,8,27  .... ... 1000
j) 1,2,3  .... ... n
k) n,n-1,n-2  .... ... 2,1

**/


#include<stdio.h>
int main()
//a) 1,2,3,......15
{
    printf("\n\n Result A \n-------------\n");
    int i=1;
    do
    {
        printf("%d\t",i);
        i++;
    }while (i<=15);


    //b) 1,3,5  .... ... 15

    printf("\n\n Result B \n-------------\n");
    i = 1;
    do
    {
        printf("%d\t",i);
        i=i+2;
    }while (i <= 15);

    //c) 2,4,6  .... ... 15

    printf("\n\n Result C \n-------------\n");
    i = 2;
    do
    {
        printf("%d\t",i);
        i= i+2;
    }while (i <= 14);

    //d) 3,6,9  .... ... 15

    printf("\n\n Result D \n-------------\n");
    i = 3;
    do
    {
        printf("%d\t",i);
        i = i+3;
    }while(i<=15);

    //e) 15, 14,13  .... ... 3 ,2, 1

    printf("\n\n Result E \n-------------\n");

    i = 15;
    do
    {
        printf("%d\t",i);
        i = i-1;
    }while(i>=1);


//f) A,B,C  .... ... z
    printf("\n\n Result F \n-------------\n");
        i = 'A';
        do
        {
            printf("%c\t",i);
            i++;
        } while(i <= 'Z');

        //g) a,b,c  .... ... z
         printf("\n\n Result G\n-------------\n");
         i = 'a';
         do
         {
             printf("%c\t",i);
             i++;
         }while(i<= 'z');

         //h) 1,4,9  .... ... 81,100
           printf("\n\n Result H\n-------------\n");
           i = 1;
           do
           {
               printf("%d\t",i*i);
               i++;
           }while(i<=10);

           //i) 1,8,27  .... ... 1000
           printf("\n\n Result I\n-------------\n");
           i = 1;
           do
           {
               printf("%d\t",i*i*i);
               i++;
           }while(i<=10);

           //j) 1,2,3  .... ... n
           printf("\n\n Result J\n-------------\n");
           scanf("%d\t",&i);
           i=1;
           do
           {
               printf("%d\t",i);
               i++;
           }while(i<=1);

           //k) n,n-1,n-2  .... ... 2,1
           printf("\n\n Result k\n-------------\n");
           scanf("%d",&i);
           i=1;
           do
           {
               printf("%d\t",i);
               i--;
           }while(i>=1);

    return 0;
}
/**
  printf("Enter the value :=");
        scanf("%d",&n);
        i=1;
        while(i<=n)
        {
            printf("%d\t",i);
            i++;
        }

**/
