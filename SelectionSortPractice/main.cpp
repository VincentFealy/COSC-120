#include <iostream>

using namespace std;

void selectionSort(int[], int);
void displayArray(int[], int);

const int size = 5;

int main()
{
    int nums[size] = {6,20,14,9,10};

    selectionSort(nums,size);

    cout << "The nums in acending order: " << endl;
    displayArray(nums, size);

    //selectionSort(array,size);

    //cout << "The nums in decending order: " << endl;
    //displayArray(array, size);
    return 0;
}

void displayArray(int array[], int elems)
{
    for (int count = 0; count < elems; count++)
        cout << array[count] << " ";
    cout << endl;
}

void selectionSort(int array[], int size)
{

    int i, minIndex, minValue;

    for (i=0; i < (size - 1); i++)
    {
        minIndex = i;
        minValue = array[i];
        for(int j = i +1; j < size; j++)
        {
            if(array[j] < minValue)
            {
                minValue = array[j];
                minIndex = j;
            }
        }
        array[minIndex] = array[i];
    array[i] = minValue;
    }

    displayArray(array, size);
}
