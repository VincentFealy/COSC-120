#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char userInput[12];
    cout << "Enter a sequence of numeric Characters!" << endl;
    cin >> userInput;

    for(int i; userInput[i]!='\O'; i++){
        cout << userInput[i]<<" ";
    }

    return 0;
}
