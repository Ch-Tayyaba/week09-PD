#include<iostream>
using namespace std;
main()
{
    int size;
    int seconds;
    int count = -1;
    string color;
    cout << "Enter total number of colors you want to color : ";
    cin >> size;
    string colors[size];
    for(int idx = 0 ; idx < size ; idx++)
    {
        cout << "Enter Color :";
        cin >> colors[idx];
    }
    seconds = 2 * size;
    for(int idx = 0 ; idx < size ; idx++)
    {
        if(colors[idx] != colors[idx+1])
        {
            count = count + 1;
        }
    }
    seconds = seconds + count;
    cout << "Your time will be : " << seconds;
}