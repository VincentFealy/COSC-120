//Vincent fealy
//2/22/21
//CS120
#include <iostream>

using namespace std;

int main()
{
    double value, sum;
    double average, min, max;
    double count;

    sum = 0;
    count = 0;

    cout << "Enter a sequence of nonnegative numbers followed by -1 " << endl;
    cin >> value;

    min = value;
    max = value;

    while(value >= 0)
    {
        sum += value;
        count++;
        if(value > max)
            max = value;
        else if(value < min)
            min = value;


        cin >> value;
    }
    if(count == 0)
        cout << "No sequence has been entered!" << endl;
    else
    {
        average = sum / count;
        cout << "Avg: " << average << endl;
        cout << "Min: " << min << endl;
        cout << "Max: " << max << endl;
        cout << "Sum: " << sum << endl;
    }
}
