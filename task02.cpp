#include<iostream>
using namespace std;
int moviePrice(string typeOfMovie);
main()
{
    string typeOfMovie;
    int price;
    cout << "Enter Movie: ";
    cin >> typeOfMovie;
    price = moviePrice(typeOfMovie);
    cout << "Your price will be : " << price;
}
int moviePrice(string typeOfMovie)
{
    string movie[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    float price = 500;
    for(int idx = 0 ; idx < 4 ; idx++)
    {
        if(movie[idx] == typeOfMovie)
        {
            if(idx % 2 == 1)
            {
                price =500 -(0.05 * 500);
            }
            else
            {
                price =500 -(0.1 * 500);
            }
        }
    }
    return price;
}