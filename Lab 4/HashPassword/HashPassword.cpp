//Vincent fealy
//2/22/21
//CS120
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string user;
    int ascChar;

    getline(cin, user);

    cout << user << endl;

    for (int i=0;i<user.length();i++)
    {
        ascChar = user[i];
        cout << ascChar << endl;
    }

    return 0;
}
