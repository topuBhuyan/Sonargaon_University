/**
write a menu-driven C program perform the following operations between two integer number.
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
**/
#include<stdio.h>
int main()
{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("0. Exit\n");
    printf("===============\n");

    int c,a,b,z;
    do{
    printf("Enter your choice:");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        printf("Enter the value of a & b:");
        scanf("%d %d",&a,&b);
        z = a + b;
        printf("%d + %d = %d\n",a,b,z);
        break;
    case 2:
        printf("Enter the value of a & b:");
        scanf("%d %d", &a,&b);
        z = a - b;
        printf("%d - %d = %d\n", a,b,z);
        break;
    case 3:
        printf("enter the value of a & b:");
        scanf("%d %d", &a, &b);
        z = a * b;
        printf("%d * %d = %d\n", a, b,z);
        break;
    case 4:
        printf("Enter the value of a & b:");
        scanf("%d %d", &a, &b);
        z = a / b;
        printf("%d / %d = %d\n", a,b,z);
        break;
    case 5:
        printf("Enter the value of a & b:");
        scanf("%d %d", &a,&b);
        z = a % b;
        printf("%d %% %d = %d\n", a,b,z);
        break;

        break;
    default:
        printf("Enter the choice please try again.\n");

    }
    }while(1);
    return 0;
}
