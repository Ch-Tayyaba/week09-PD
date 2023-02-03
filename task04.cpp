#include<iostream>
using namespace std;
main()
{
    int num;
    int number;
    bool boom = false;
    int remainder;
    int quotient;
    cout << "Enter Total Numbers in array : ";
    cin >> num;
    int array[num];
    for(int idx = 0 ; idx < num ; idx++)
    {
        cout << "Enter Number : ";
        cin >> array[idx];
    }
    for(int idx = 0 ; idx < num ; idx++)
    {
        if(array[idx] == 7)
        {
            boom = true;
        }
           
    }
    if(boom == false)
    {
    for(int idx = 0 ; idx < num ; idx++)
    {
        if(array[idx] > 9)
        {
            number = array[idx];
            while(number > 0 && boom != true)
            {
                remainder = number % 10;
                quotient = number / 10;
                if(remainder == 7)
                {
                    boom = true;
                }
                number = quotient;
            }
        }
    }
    }
    if(boom == true)
    {
        cout << "BOOM!";
    }
    else
    {
        cout << "None of the item contain 7 within them. " ; 
    }   
}