//Vincent Fealy

#include<fstream>
#include<iostream>
using namespace std;

enum Choice {LETTER,NUMBER,QUIT};

const int NAME_LEN = 20;

/* typedef is an indirect way of type declaration.
* e.g., in the Entry structure, name is a type of
* Name, which is simplay a character array.
*/
typedef char Name[NAME_LEN+1];

struct Entry
{
    Name name;
    int  PN;
};

//Pre: file "phonenum.txt" must be in directory
//Post: opens file, reads all name/phone-number pairs,
//      and returns how many there were.
int ReadPNs(Entry[]);

//Pre: Entry array contains all the name/phone-number pairs,
//     size is the size of the Entry array,
//     num is the phone-number being search for.
//Post: prints out the names of the people with that phone number.
//      prints nothing if that number isn't in the list.
void NumList(const Entry[], int size, int num);

//Post: prints all the name/phone number pairs of everyone whose
//      name starts with that letter.
void LetterList(const Entry[], int size, char ch);

//Pre: int must be at most 7 digits
//Post: prints out as 7-digit phone number in the format of xxx-xxxx;
//if a phone number is less than 7 digits, padding 0s in the front.
void ShowPN(int);


//Post: prints the menu
void Menu();


int main()
{

    Entry L[50];
    int size, numChoice;
    char ch;
    int num;

    size = ReadPNs(L);
    numChoice=0;
    while (numChoice != QUIT + 1)
    {
        Menu();
        cin >> numChoice;
        switch (numChoice)
        {
        case  LETTER+1 :
            cout << "Enter initial:";
            cin >> ch;
            LetterList ( L, size, ch );
            break;
        case  NUMBER+1:
            cout << "Enter number as 7 digits:";
            cin >> num;
            NumList ( L, size, num );
            break;
        case QUIT+1:
            cout << "Thank you!" << endl;
            break;
        default:
            cerr << "Not an Option!" << endl;
            break;
        }
    }
    return 0;
}

void NumList(const Entry L[],int size,int num)
{
    for (int i = 0; i < size; i++)
    {
        if (L[i].PN == num)
        {
            cout << L[i].name << endl;
        }
    }
}

void LetterList(const Entry L[],int size,char ch)
{
    for (int i = 0; i < size; i++)
    {
        if (L[i].name[0] == ch)
        {
            cout << L[i].name << " ";
            ShowPN(L[i].PN);
        }
    }
}

void ShowPN(int n)
{
    if (n > -1)
    {
        string s = std::to_string(n);
        int len = s.length();
        int numZeros = 7 - len;
        if (numZeros >= 0)
        {
            string fullPN = std::string(numZeros, '0') + s;
            cout << fullPN.substr(0,3) << "-" << fullPN.substr(3,6) << endl;
        }
    }
}

int ReadPNs(Entry L[])
{
    ifstream pnFile;
    pnFile.open("phonenum.txt");

    int size = 0;
    while (pnFile >> L[size].name >> L[size].PN)
    {
        size++;
    }
    pnFile.close();
    return size;
}

void Menu()
{
    cout<<endl;
    cout<<"Enter "<<LETTER+1<<" to look up names starting"
        <<" with a certain letter\n";
    cout<<"      "<<NUMBER+1<<" to look up a number\n";
    cout<<"      "<<QUIT+1<<" to quit\n";
    cout<<"    ";
}
