#include<iostream>
using namespace std ;

int largest(int a, int b ) ;
int largest( int a, int b, int c ) ;
int largest( int a, int b, int c, int d ) ;
double largest (double a, double b ) ;

int main()
{
	int l = largest (10, 20) ;
	cout<<"largest between  two number" <<l <<endl ;
	int n = largest(10, 50, 30) ;
	cout<<"largest between three number" <<l <<endl ;
	int k = largest (10, 20, 30, 100) ;
	cout<<"largest between four number " <<l <<endl ;
	double x = largest (2.7, 9.7) ;
	cout<<"largest between two number " << x <<endl ;
	int largest (int a, int b)  
	int m = (a>b) ? a, b ;
	}
	
	return 0 ;
}
