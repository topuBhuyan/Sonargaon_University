#include<iostream>
using namespace std;

class calculator
{
private:
    int n1, n2;
    void setvalue(){
    cout<<"Enter 1st number=";
    cin>>n1;
    cout<<"Enter 2nd number=";
    cin>>n2;
    }
    void calculatorsum()
    {
        setvalue();
        cout<<"n1+n2=" <<n1+n2<<endl;
    }
    void calculatorsub()
    {
        setvalue();
        cout<<"n1-n2=" <<n1-n2<<endl;
    }
public:
    void getsum()
    {
        calculatorsum();
    }
    void getsub()
    {
        calculatorsub();
    }
};

int main()
{
   calculator obj;
   obj.getsum();
   obj.getsub();
    return 0;
}
