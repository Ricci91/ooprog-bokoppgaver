#include <iostream>
using namespace std;

int main ()
{
    int numcandy;
    double earnings;
    double sum;

    //print welcome to the app
    cout << "Welcome to the candy bar calculator!\n";
    cout << "Please enter how many candy bars you sold.\n";
    //enter number of candy bars sold
    cin >> numcandy;
    //enter how much they earn per candy bar
    cout << "Please enter how much you earn per candy bar.\n";
    cin >> earnings;
    //calculate earnings
    sum = (double)numcandy * earnings;
    //display earnings
    cout << "The total earnings for the sales were: " << sum << "!\n";
    

    return 0;
}