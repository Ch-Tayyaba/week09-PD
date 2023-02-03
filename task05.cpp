#include<iostream>
using namespace std;
main()
{
    string array[4];
    string element;
    int counter = 0;
    cout << "ENTER ELEMENTS FOE ARRAY :-" << endl;
    for(int idx = 0 ; idx < 4 ; idx++ )
    {
        cout << "Enter element : ";
        cin >> array[idx];
    }
    element = array[0];
    for(int idx = 0 ; idx < 4 ; idx++)
    {
        if(element == array[idx])
        {
            counter = counter + 1;
        }
    }
    if(counter == 4)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
