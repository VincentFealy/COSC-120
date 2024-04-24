//Vincent
//2/23/21
//CS120
#include <iostream>
#include <string>
using namespace std;

void ASCII(string userString)
{
    for (char i = 0; i <= userString.length(); i++)
    {
        cout << (char)userString[i] << endl;
    }
}

int main()
{
    string theString;
    cout << "Enter a String: ";
    getline(cin,theString);
    cout <<"String converted to:";
    ASCII(theString);

    return 0;
}
