#include<stdio.h>
int main()
{
    int i, ami[6];
    printf("Input 6 array elements: \n");
    for(i = 0; i<6; i++)
    {
        scanf("%d", &ami[i] ); 
    }
    printf("Output 6 array elements:\n");
    for(i = 0; i<6; i++)
    {
        printf("%d\n",ami[i] );
    }
    return 0;
}
