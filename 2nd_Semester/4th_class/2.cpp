#include<iostream>
using namespace std ;

int main()
{
	int n, org, rem, sum = 0 ;
	cout<<"Enter a number = " ;
	cin>>n ;
	
	rem = n % 10 ;
	sum = sum + rem * rem*rem ;
	n = n/10 ;
	
	if(org ==sum) cout<<org
		<<"is an armstrong number \n" ;
	else  (org)
 		<<"is not arm strong number" ;
	
	return 0 ;
}
