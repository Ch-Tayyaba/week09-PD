#include<iostream>
using namespace std;
main()
{
    string array;
    bool type;
    int length;
    cout << "Enter a string: ";
    cin >> array;
    length = array.length();
    if(length % 2 == 0)
    {
        type = true;
    }
    else
    {
        type = false;
    }
    cout << type;
}