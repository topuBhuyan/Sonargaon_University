/**
n = 6 1, 2, 3
n = 28 = 1,2,4,7,14
		14 = 1.7
**/
#include<iostream>
using namespace std ;

int main()
{
	int n , orginalnum, s = 0, i ;
	cout<<"Enter a number = " ;
	cin>>n ;
	
	for(i=1 ; i<n ; i++)
		if(n%i == 0)
	{
		s = s + i ;
	}
	if(orginalnum==s) 
		cout <<"is a perfect  number\n" ;
	else
		cout<<"is not perfect number\n" ;
	
	
	return 0 ;
}

