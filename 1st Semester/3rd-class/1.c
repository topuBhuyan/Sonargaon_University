#include<stdio.h>
int main()

{
    int choice;
    do
    {
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Hi\n");
            break;
        default:
            printf("Enter invalid choice.\n");
        }
    }
    while(1);

    return 0;
}

/**
syntax of switch statement:
int choice = 5;
switch(constant)
{
case 1:
  ------
    break;
 case 2:
    -----
    break;
  case 3:
     break;
     ------
     ------
   case n:
      -----
      break;
 default:
      statement;

}
**/

syntax of switch statementn in choice case break
