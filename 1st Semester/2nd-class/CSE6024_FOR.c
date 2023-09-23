
/**
write a c program to display the following series for loop:
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

    return 0;
}




