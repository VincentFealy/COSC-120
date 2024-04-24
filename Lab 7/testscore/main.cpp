//Vincent Fealy
#include <iostream>

using namespace std;

typedef int GradeType[100];

float findAverage(const GradeType, int);
int  findHighest(const GradeType, int);
int  findLowest(const GradeType, int);

int main()
{
    GradeType grades;
    int numberOfGrades;
    int pos;
    float avgOfGrades;
    int highestGrade;
    int lowestGrade;

    pos = 0;
    cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
    cin >> grades[pos];

    while (grades[pos] != -99){
        array[pos]=grades;
        pos++;
    }

    numberOfGrades = ;

    avgOfGrades = findAverage(grades, numberOfGrades);

    cout << endl << "The average of all the grades is " << avgOfGrades << endl;

    cout << endl << "The highest grade is " << highestGrade << endl;


    return 0;
}

float findAverage(const GradeTypearray, int size){
    float sum = 0;

    for (int pos = 0; pos < size; pos++){
        sum = sum + array[pos];
    }
    return (sum / size);
}

intfindHighest(const GradeType array, int size){
    for(i=0; i< size; ++i){
        if(grades[0] < grades[i]){
            grades[0] = grades[i];
        }
    }
    cout << "Highest Grade: " << grades[0];
    return 0;
}

intfindLowest(const GradeType array, int size){
    for(i=0; i< size; ++i){
        if(grades[0] > grades[i]){
            grades[0] = grades[i];
        }
    }
    cout << "Highest Grade: " << grades[0];
    return 0;
}
