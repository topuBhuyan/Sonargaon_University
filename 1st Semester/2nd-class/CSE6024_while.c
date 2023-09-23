

/**
write a c program to display the following series while loop:
SU,SU,SU,SU

a) 1,2,3, ... .... 15
b) 1,3,5  .... ... 15
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



#include<stdio.h>
int main()

//a) 1,2,3, ... .... 15
{
       int i,n;

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


    return 0;
}
/**
    scanf("%d",&n);
             for(i=n; i>=1; i--)
                printf("%d\t",i);
**/
