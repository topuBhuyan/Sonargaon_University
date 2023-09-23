/**
Array is the variable that can store multiple values of the name types:
syntax: array type array name [array size];
Exam: int a[5];
How to initlize array elements :
int a[5]={10,5,7,20,9};
 Elements=- 10,5,7,20,9
 Index:- 0,1,2,3,4
**/
#include<stdio.h>
int main()
{
	int a [5] = {10,5,7,20,9};
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
	
	return 0;
}
