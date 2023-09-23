#include<iostream>
using namespace std ;

class student
{
public :
    string name ;
    int id ;
    double gpa ;

    {
        cout <<"name " <<name <<endl ;
        cout <<"id" <<id <<endl ;
        cout <<"gpa" <<gpa <<endl ;

    }

};
int main()
{
	student ob1 ;
	ob1.name = "rohim" ;
	ob1.id = 1010 ;
	ob1.gpa= 399 ;
	
	student ob2 ;
	ob2.name = "topu" ;
	ob2.id = 193 ;
	ob2.gpa= 2.00 ;
	
	student ob3 ;
	ob3.name = "korime" ;
	ob3.id = 39847 ;
	ob3.gpa= 4.99 ;
}
