#include <iostream>

using namespace std;
int numberofpounds;
double priceperpound;
char salestax;
double salestaxrate = 0.35;
double total_coffee_price;

int main()
{
    cout << "How many pounds of coffee do you want to order?" << endl;
    cin >> numberofpounds;
    cout << "What is the price per pound of coffee?" << endl;
    cin >> priceperpound;
    cout << "Do you want to charge sales tax?" << endl;
    cin >> salestaxrate;
        total_coffee_price = numberofpounds *priceperpound;
}
if ((salestax == 'y') || {salestax == 'Y'))
{
    total_coffee_price = (total_coffee_price*salestaxrate) + total_coffee_price;
}
if (salestax == 'n')
    cout << "just for fun to see what happens" endl;

cout << "Your total price of coffee is: $" << endl;
    return 0;
}
