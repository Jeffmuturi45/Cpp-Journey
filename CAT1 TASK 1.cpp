#include <iostream>
using namespace std;

void inputMarks(int &cat, int &exam)
{
    cout << "Enter CAT Marks (0-40): ";
    cin >> cat;

    cout << "Enter Exam Marks (0-60): ";
    cin >> exam;
}

int calculateTotal(int cat, int exam)
{
    return cat + exam;
}

char getGrade(int total)
{
    if (total >= 70)
        return 'A';
    else if (total >= 60)
        return 'B';
    else if (total >= 50)
        return 'C';
    else if (total >= 40)
        return 'D';
    else
        return 'F';
}

void displayResults(int cat, int exam, int total, char grade)
{
    cout << "\n------ STUDENT RESULTS ------" << endl;
    cout << "CAT Marks   : " << cat << endl;
    cout << "Exam Marks  : " << exam << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Grade       : " << grade << endl;
}

int main()
{
    int cat, exam, total;
    char grade;

    inputMarks(cat, exam);
    total = calculateTotal(cat, exam);
    grade = getGrade(total);
    displayResults(cat, exam, total, grade);

    return 0;
}
