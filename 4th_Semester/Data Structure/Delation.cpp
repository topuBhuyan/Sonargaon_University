#include<iostream>
using namespace std;

int main()
{
  int Number,location,item;
  cout << "Enter Array size : ";
  cin >> Number;

  int myArray[Number];
  cout <<"Enter Element of Number :";
  for(int i = 0; i <Number; i++)
  {
    cin >> myArray[i];
  }
  cout << "Enter the location the item to be inserted : ";
  cin >> location ;

  for(int i = Number-1; i >= location; i--)
  {
    myArray[i+1] = myArray[i];
  }

  myArray[location] = item;
  for(int i = 0; i <= Number; i++)
  {
    cout << myArray[i] << " ";
  }
  cout << endl;

  return 0;
}
