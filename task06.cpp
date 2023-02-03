#include<iostream>
using namespace std;
main()
{
    int size;
    int times;
    cout << "Enter size of array : ";
    cin >> size;
    int array[size];
    for(int idx = 0 ; idx < size ; idx++)
    {
        cout << "Enter number :";
        cin >> array[idx];
    }
    cout << "Enter number of times even-odd transformation need to be done:";
    cin >> times;
    for(int count = 1 ; count <= times ; count++)
    {
        for(int idx = 0 ; idx < size ; idx++)
        {
            if(array[idx] % 2 == 0)
            {
                array[idx] = array[idx] - 2;
            }
            else
            {
                array[idx] = array[idx] + 2;
            }
        }
    }
    cout << "[ ";
    for(int idx = 0 ; idx < size ; idx++)
    {
        cout << array[idx] << " ,";
    }
    cout << "] ";   
}