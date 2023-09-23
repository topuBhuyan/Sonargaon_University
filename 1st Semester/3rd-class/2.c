/**
write a c program too display following series using switch case
1,2,3.......9,10
1,4,7.......19,22
1 + 3 + 3 + .....+ 10
**/
#include<stdio.h>
int main()

{
    int c,a,b,z;
    do{
    printf("\n Enter the choice:");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        for(i=1; i<=10; i++)
        {
            printf("%d\t",i);
        }
        break;
    case 2:
        i=1;
        while(i<=21)
        {
            printf("%d\t",i);
            i=i+3;
        }
        break;
    default:
        printf("\n Invalid choice. please try agian \n");

    }
    }while(1);

    return 0;
}
