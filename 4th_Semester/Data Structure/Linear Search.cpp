#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;

    int array [size], i, search_item;
    for(i = 0; i < size; i++)
    {
        cin >> array[1];
    }
    cin >> search_item;

    int count = 0;
    for(i = 0; i < size; i++)
    {
        if(array[i] == search_item)
        {
            cout << "Found at" <<i << endl;
        }
        else
        {
            count++;
        }
    }

    if(count == size)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
