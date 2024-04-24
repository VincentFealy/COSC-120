// This program uses a selection sort to arrange an array of integers in
// ascending order

//Vincent Fealy

#include <iostream>
using namespace std;

// function prototypes
void selectionSortArray(int[], int);
void displayArray(int[], int);

const int SIZE = 5;

int main()
{
	int values[SIZE] = { 9, 2, 0, 11, 5 };

	cout << "The values before the selection sort is performed are:" << endl;
	displayArray(values, SIZE);

	selectionSortArray(values, SIZE);

	cout << "The values after the selection sort is performed are:" << endl;
	displayArray(values, SIZE);

	return 0;
}

//******************************************************************
//	displayArray
//
//  task:	  to print the array
//  data in:  the array to be printed, the array size
//  data out: none
//
//******************************************************************

void displayArray(int array[], int elems)	// function heading
{
	// Displays array
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}

//******************************************************************
//	selectionSortArray
//
//  task:	  to sort values of an array in ascending order
//  data in:  the array, the array size
//  data out: the sorted array
//
//******************************************************************

void selectionSortArray(int array[], int n)
{
    static int i;		// array position currently being put in order
	static int j;	// location of smallest value found
	static int temp;	// holds the smallest value found

	for (i = 0; i < (n - 1); i++)	// outer loop performs the swap
												// and then increments seek
	{

		for (int j = i + 1; j < n; j++)
		{
			// inner loop searches through array
			// starting at array[seek] searching
			// for the smallest value. When the
			// value is found, the subscript is
			// stored in minCount. The value is
			// stored in minValue.

			if (array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				cout << endl << "The elements within are: " << endl;
				displayArray(array,n);
			}
		}


	}
}
