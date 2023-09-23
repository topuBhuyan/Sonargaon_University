/**
using switch it a menu-driven (save it using your full ID e.g.CSE2202026024 switch . C )

1) 1,2,3,........15
2) 1,3,5,........15
3) 2,4,6.........14
4) 3,6,9.........15
5) 15,14,13,...3,2,1
6) A,B,C,....Z
7) a,b,c,....z
8) 1,4,9,....81,100
9) 1,8,27,...100
10) 1,2,3.....n
11) n,n-1,n-2,..2,1
**/
#include<stdio.h>
int main()
{

    printf("1) 1,2,3,........15\n")  ;
    printf("2) 1,3,5,........15\n")  ;
    printf("3) 2,4,6.........14\n")  ;
    printf("4) 3,6,9.........15\n")  ;
    printf("5) 15,14,13,...3,2,1\n")  ;
    printf("6) A,B,C,....Z\n")  ;
    printf("7) a,b,c,....z\n")  ;
    printf("8) 1,4,9,....81,100\n")  ;
    printf("9) 1,8,27,...100\n")  ;
    printf("10) 1,2,3.....n\n")  ;
    printf("11) n,n-1,n-2,..2,1\n")  ;
    printf("============================  \n")  ;

    int c,i,n;
    do
    {
        printf("\nResult_A\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            for(i = 1; i<=15; i++)
            {
                printf("%d\t",i);
            }
            break;

        case 2:
            printf("\nResult_B\n");
            for(i=1; i<=15; i= i+2)
            {
                printf("%d\t",i);
            }
            break;
        case 3:
            printf("\n Result-C\t");
            for(i=2; i<=16; i=i+2)
            {
                printf("%d\t",i);
            }
            break;
        case 4:
            printf("\n Result-D\t");
            for(i=3; i<=15; i=i+3)
            {
                printf("%d\t",i);
            }
            break;
        case 5:
            printf("\n Result-E\t");
            for(i=15; i>=1; i=i-1)
            {
                printf("%d\t",i);
            }
            break;
        case 6:
            printf("\n Result-F\t");
            for(i= 'A'; i<='Z'; i = i + 1)
            {
                printf("%c\t",i);
            }
            break;
        case 7:
            printf("\n ResultG\t");
            for (i='a'; i<='z'; i = i+1)
            {
                printf("%c\t",i)  ;

            }
            break;
        case 8:
            printf("\n Result-H\t");
            for(i=1; i<=10; i++)
            {
                printf("%d\t",i*i);
            }
            break;
        case 9:
            printf("\n Result-I\t");
            i=1;
            while( i<=10)

            {
                printf("%d\t",i*i*i);
                i++ ;
            }
            break;
        case 10:
            printf("\n Result-J");
            printf("Enter The Value:");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                printf("%d\t",i);
            }
            break;
        case 11:
          printf("\n Result-K");
printf("Ente The Value");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
printf("%d\t",i);
}
break;
        default:
            printf("Invalid Number:");

        }
    }
    while(1);

    return 0;
}
