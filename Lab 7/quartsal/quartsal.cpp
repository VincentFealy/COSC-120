//Vincent Fealy
#include <iostream>
#include <iomanip>
using namespace std;

const int MAXYEAR = 10;
const int MAXCOL = 5;

typedef int SalesType[MAXYEAR][MAXCOL];

void getSales(SalesType, int&);
void printSales(SalesType, int);
void printTableHeading();

int main()
{
    int yearsUsed;
    SalesType sales;

    getSales(sales, yearsUsed);
    printTableHeading();
    printSales(sales, yearsUsed);

    return 0;
}

void printTableHeading()
{
    cout << setw(30) << "YEARLY QUARTERLY SALES" << endl << endl << endl;
    cout << setw(10) << "YEAR" << setw(10) << "Quarter 1"
    << setw(10) << "Quarter 2" << setw(10) << "Quarter 3"
    << setw(10) << "Quarter 4" << endl;
}

void getSales(SalesTypetable, int&numOfYears)
{
cout << "Please input the number of years (1-" << MAXYEAR << ")" << endl;
cin >> numOfYears;
}

void printSales(SalesType table, int numOfYears)
{
    int i;
    for(int i = 0;i<*SalesType.length; i++){
        printf("%d\t",Array[i]);
    }
}
