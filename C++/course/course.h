#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
using namespace std;

class Course
{
private:
    // Data members
    unsigned int numOfSds;
    const char *inputFileName;
    ifstream inputFile;
    struct Student
    {
        unsigned int id;
        int score;
        char grade;
        double deviation;
    };
    Student *students;
    double averageScore, standardDeviation;
    // Member functions
    void getInput();
    void setGrades();
    void setAverage();
    void setDeviations();
    void printResult() const;

public:
    Course(unsigned int, const char *);
    ~Course();
};

#endif