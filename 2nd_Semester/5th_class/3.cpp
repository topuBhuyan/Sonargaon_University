#include<iostream>
#include<conio.h>
using namespace std ;

int main()
{
	int i, j, n, c ;
	cout<<"enter any number = " ;
	cin>>n;
	for(i=2; i<n; i++)
	{
		if(n%i==0) 
			c++;
	}
	if(c==0) cout<<n<<"" ;
	
	getch() ;
}
