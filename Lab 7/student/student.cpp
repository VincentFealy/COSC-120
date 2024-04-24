//Vincent Fealy
#include <iostream>
#include <iomanip>
using namespace std;

constint MAXGRADE = 25;
constint MAXCHAR = 30;

typedef char StringType30[MAXCHAR + 1];
typedef float GradeType[MAXGRADE];
float findGradeAvg(GradeType, int);
char findLetterGrade(float);

int main()
{
    StringType30 firstname, lastname;
    int numOfGrades;
    GradeType grades;
    float average;
    char moreInput;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Please input the number of grades each student will receive." << endl << "This must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
    cin >> numOfGrades;

    while (numOfGrades > MAXGRADE || numOfGrades < 1)
        {
            cout << "Please input the number of grades for each student." << endl<< "This must be a number between 1 and " << MAXGRADE<< " inclusive\n";
            cin >> numOfGrades;
        }
    cout << "Please input a y if you want to input more students"     << " any other character will stop the input" << endl;
    cin >> moreInput;

    while (moreInput == 'y' || moreInput == 'Y')
        {
            cout << "Please input the first name of the student" << endl;
            cin >> firstname;

            cout << endl << "Please input the last name of the student" << endl;
            cin >> lastname;

            for (int count = 0; count < numOfGrades; count++)
            {
               cout << endl << "Please input a grade" << endl;
                cin >> gradeInput;
            }
            cout << firstname << " " << lastname << " has an average of ";

            cout << float findGradeAvg <<endl;
            cout << char findLetterGrade <<endl;
            //call to get and print letter grade
        }
        return 0;
}

float findGradeAvg(GradeType array, int numGrades){
    int sum = 0;

    for(int sum = 0;sum < numGrades; sum++){
        sum =sum+array[pos];

    }
    return float (sum)/numGrades;
}

char findLetterGrade(float numGrade){
    char result;
    if (numGrade >=90){
        result = 'A';
    }
    else if(result >=80){
        result = 'B';
    }
    else if(result >=70){
        result = 'C';
    }
    else if(result >=60){
        result = 'D';
    }
    else{result = 'F';}
    return result;
}
