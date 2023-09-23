#include<iostream>
using namespace std;

void displayArray(int x[]);
void arraySum(int x[]);

int main()
{
   int x[6] = {19,10,8,17,9,15};
   displayArray(x);
   arraySum(x);
   return 0;
}
void displayArray(int x[]){
    for(int i=0; i<6; i++){
        cout<<"x [" << i <<"] = " <<x[i] <<endl;
    }
}
void arraySum(int x[]){
    cout<<"--------------\n";
    int sum = 0;
    for(int i=0; i<6;i++){
        cout<<"x [" <<i <<"] = " <<x [i] <<endl;
        sum = sum + x[i];
    }
    cout<<"summation=" <<sum<<endl;

}
