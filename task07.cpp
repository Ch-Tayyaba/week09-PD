#include<iostream>
using namespace std;
main()
{
    string array01;
    string array02;
    int count = 0;
    cout << "Enter First string : ";
    cin >> array01;
    cout << "Enter Second string : ";
    cin >> array02;
    int idx01 = 0;
    while(array01[idx01] != '\0')
    {
        int idx02 = 0;
        while(array02[idx02] != '\0')
        {
            if(array01[idx01] == array02[idx02])
            {
                count = count + 1;
                break;
            }
            idx02++;
        }
        idx01++;
    }
    cout << "String have " << count << " common character.";
}