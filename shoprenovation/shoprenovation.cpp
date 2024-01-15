#include <iostream>
using namespace std;

int main()
{
    double furniture, paint, display, sum;
    //Print welcome message
    cout << "Welcome to the program.\n";
    cout << "We will calculate the total price of your renovation.\n";

    //Enter price of furniture
    cout << "Please enter the price of the furniture.\n";
    cin >> furniture;

    //Enter cost of painting
    cout << "Please enter the price of the paint.\n";
    cin >> paint;

    //Enter cost of display board
    cout << "Please enter the price of the display board.\n";
    cin >> display;

    //Calculate total
    sum = furniture + paint + display;

    //Display total
    cout << "The total renovation costs are: " << sum << "$.\n";

    return 0;
}