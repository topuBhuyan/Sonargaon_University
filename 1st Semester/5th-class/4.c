/**
Write a C program to the take 5 random number form user number  using 1D array and display the first and last array  elemnt.
**/
#include<stdio.h>
int main()
{
	int x[5], i;
	for(i = 0; i < 5; i++){
		scanf("%d", &x[i] );
	}
	printf("1st input = %d\n", x[0] );
	printf("Last input = %d\n", x[4] );
	
	return 0;      
}
