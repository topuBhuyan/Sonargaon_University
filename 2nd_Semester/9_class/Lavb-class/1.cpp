#include<iostream>
using namespace std ;
int fact(int n) ;

int main()
{
	cout<<fact(10) ;
	return 0 ;
}
int fact(int n) 
{
	if(n == 0) return 1;
	return n * fact(n-1) ;
} 
