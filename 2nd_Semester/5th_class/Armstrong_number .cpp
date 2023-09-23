#include<iostream>
using namespace std ;

int main()
{
	int n, orginalnum, reminder, sum = 0 ;
	cout<<"Enter a number :" ;
	cin>>n ; 
	reminder = n%10 ;
	sum = sum + reminder * reminder * reminder ;
	n = n/10 ;
	
	if(orginalnum == sum)  
	cout <<"is an Armstrong number \n" ;
	else
	cout<<"is not an Armstrong number \n" ;
	
	
	return 0 ;
}
