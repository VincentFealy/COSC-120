//Vincent Fealy
#include <iostream>
#include <iomanip>
using namespace std;


const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS];

void getPrices(PriceType, int&, int&);
void printPrices(PriceType, int, int);

int main()
{
    int rowsUsed;
    int colsUsed;
    PriceType priceTable;

    getPrices(priceTable, rowsUsed, colsUsed);

    printPrices(priceTable, rowsUsed, colsUsed);

    return 0;
}

void getPrices(PriceType table, int& numOfRows, int& numOfCols)
{
cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
cin >> numOfRows;

cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
cin >> numOfCols;

for (int row = 0; row < numOfRows; row++){
    for (int col = 0; col < numOfCols; col++){
        cout << "Number of rows:" << numOfRows <<
    }
 }
}

void printPrices(PriceType table, int numOfRows, int numOfCols)
{
    cout << fixed << showpoint << setprecision(2);

    for (int row = 0; row < numOfRows; row++){
        for (int col = 0; col < numOfCols; col++){
            cout << numOfRows << endl;
            cout << numOfCols << endl;
        }
    }
}
