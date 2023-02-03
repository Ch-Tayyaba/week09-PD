#include<iostream>
using namespace std;
int totalPrice(int quantity , string typeOfFruit);
main()
{
    string typeOfFruit;
    int quantity;
    int price;
    cout << "Enter Fruit: ";
    cin >> typeOfFruit;
    cout << "Enter Quantity: ";
    cin >> quantity;
    price = totalPrice(quantity , typeOfFruit);
    cout << "Your price will be : " << price;
    

}
int totalPrice(int quantity , string typeOfFruit)
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    int finalPrice = 0;
    for(int idx = 0 ; idx < 4 ; idx++)
    {
        if(typeOfFruit == fruit[idx])
        {
            finalPrice = quantity * price[idx];
        }
    }
    return finalPrice;
}