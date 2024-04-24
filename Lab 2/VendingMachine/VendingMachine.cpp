#include <iostream>

using namespace std;

int main()
{

    int x,y,z;

    cout << "Enter bill value (1 = $1 bill, 5=$5 bill, etc.): ";
    cin >> x;
    cout << "Enter the number of quarters: ";
    cin >> y;
    cout << "Enter the item price in pennies: ";
    cin >> z;

//This section i fixed the issues with the math so the machine returns the correct change amount.
    int yourChange = (x*100) + (y*25) -z;
    cout << "Dollar Coins: " << yourChange/ 100 << endl;

    cout << "Quarters " << (yourChange % 100)/25;

    return 0;
}
