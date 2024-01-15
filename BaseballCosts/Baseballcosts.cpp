#include <iostream>
using namespace std;

int main ()
{
    int amountBaseballs;
    double price, sum;
    //Print welcome message
    cout << "Welcome to the program!\n";
    //Ask for amount of baseballs and get input
    cout << "Please enter how many baseballs you bought\n";
    cin >> amountBaseballs;

    //Ask for price per baseball and get input
    cout << "Please enter price per baseball.\n";
    cin >> price;
    //Calculate
    sum = (double)amountBaseballs * price;

    //Print result
    cout << "The total price of baseballs are: " << sum << "!\n";

    return 0;
}