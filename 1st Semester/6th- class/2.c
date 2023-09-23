/**
Find the largest elamets form the floting give array: [6] = {4,40,8,80,6,60}
**/
#include<stdio.h>
int main()
{
	int a[6] = {42,4,8,80,6,60};
	int i, smellest= a [0];
	for (i=1; i<6; i++)
	{
		if(smellest>a [i])
			smellest = a[i];
	}
	{
		printf("smellest number is = %d\n", smellest);
	}
	
	return 0;
			
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

/**
	
	1. when i = 1; i<6(T); i= i+ 1 = 1 + 1 = 2
			if (4>40) F
	2. when i = 2; i<6(T); i=i+1 = 1 + 2 = 3
			if (4>8)F
	3. when i= 3; i<6(T); i = i+1 = 1 + 3 = 4
			if(4>80)F
	4. when i =4; i<6(T); i = i+1 = 1+ 4 = 5
			if (4>6) F
	5. when i = 5; i<6(T); i = i + 1 = 1 + 5 = 6
			if (4>60)F
	6. when i = 6; 6<6 (F)					

**/
