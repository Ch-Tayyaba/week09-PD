#include<iostream>
using namespace std;
main()
{
    int PIN[4];
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    cout << "Ener PIN Number : " << endl;
    for(int idx = 0 ; idx < 4 ; idx++)
    {
        cin >> PIN[idx];
    }
    if((PIN[1] >= 0 && PIN[1] < 10) && (PIN[2] >= 0 && PIN[2] < 10) && (PIN[3] >= 0 && PIN[3] < 10)  && (PIN[0] >= 0 && PIN[0] < 10))
    {
        cout <<"[" ;
        for(int idx = 0 ; idx < 4 ; idx++)
        {
            PIN[idx] = PIN[idx] + idx;
            if(PIN[idx] <= 9)
            {
                cout <<moves[PIN[idx]] << " ,";
            }
            else
            {
                PIN[idx] = PIN[idx] - 10;
                cout << moves[PIN[idx]] <<  " ,";
            }
        }
        cout <<"] " ;
    }
    else
    {
        cout << "Invalid Input. ";

    }    
}