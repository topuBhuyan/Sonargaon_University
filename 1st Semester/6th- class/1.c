/**
Find the largest elment from the floting  give array : int [6]= {4,40,8,80,6,60}
**/
#include<stdio.h>
int main()
{
        int a[6]={42,4,8,80,6,60};
        int i, largest =a [0];
        for(i=1; i<6; i++)
        {
                if (largest <a [i] )
                        largest = a[i];
        }
        printf("largest number is = %d\n", largest);
	return 0; 
}
/**
	
	1. when i = 1; i<6(t); i= i+ 1 = 1 + 1 = 2
	if (4>40) T
		largest = 40;
	2. when i = 2; 2<6(T); i= i+1 = 2+1 = 3
		if (40<8)F
	3. when i=3;  3<6(T); i= i+1 = 3+1 = 4
			if (40<80)T
				largest = 80;
	4. when i=4;  4<6(T); i= i+1 = 4+1 = 5
				if (80<6)F
	5. when i=5; 5<6(T); i= i+1 = 5+1 = 6
				   if(80<60)
	6. when i = 6; 6<6(F)	 
**/
