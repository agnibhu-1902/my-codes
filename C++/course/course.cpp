#include "course.h"
#include <iomanip>
#include <cmath>
#include <cassert>

Course::Course(unsigned int num, const char *fn)
    : numOfSds(num), inputFileName(fn)
{
    inputFile.open(inputFileName);
    assert(inputFile);
    students = new Student[numOfSds];
    getInput();
    setGrades();
    setAverage();
    setDeviations();
    printResult();
}
Course::~Course()
{
    delete[] students;
    inputFile.close();
}
void Course::getInput()
{
    for (int i = 0; i < numOfSds; i++)
    {
        inputFile >> students[i].id;
        inputFile >> students[i].score;
    }
}
void Course::setGrades()
{
    char charGrades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    for (int i = 0; i < numOfSds; i++)
        students[i].grade = charGrades[students[i].score / 10];
}
void Course::setAverage()
{
    int sum = 0;
    for (int i = 0; i < numOfSds; i++)
        sum += students[i].score;
    averageScore = static_cast<double>(sum) / numOfSds;
}
void Course::setDeviations()
{
    standardDeviation = 0.0;
    for (int i = 0; i < numOfSds; i++)
    {
        students[i].deviation = students[i].score - averageScore;
        standardDeviation += pow(students[i].deviation, 2);
    }
    standardDeviation = sqrt(standardDeviation) / numOfSds;
}
void Course::printResult() const
{
    cout << endl;
    cout << "Identity\tScore\tGrade\tDeviation" << endl;
    cout << "--------\t-----\t-----\t---------" << endl;
    for (int i = 0; i < numOfSds; i++)
    {
        cout << right << noshowpoint << noshowpos;
        cout << setw(8) << students[i].id;
        cout << setw(13) << students[i].score;
        cout << setw(8) << students[i].grade;
        cout << fixed << setprecision(2);
        cout << setw(12) << showpos << students[i].deviation << endl;
    }
    cout << endl
         << "Average score: " << setw(4) << noshowpos << averageScore << endl;
    cout << "Standard deviation: " << showpos << standardDeviation << endl;
}