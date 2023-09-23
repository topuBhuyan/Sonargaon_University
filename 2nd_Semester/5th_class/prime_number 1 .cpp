//to check when is prime or not prime number

#include<iostream>
using namespace std ;

int main()
{
    int num, originalnum, i, n, c= 0 ;
    cout<<"Enter any positive number = " ;
    cin>>num ;

    originalnum = n ;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            c ++ ;
    }
    (c==0)  ? cout<<"prime" : cout <<"Not prime" ;

}
