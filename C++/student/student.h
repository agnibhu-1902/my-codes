#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student: public Person
{
private:
    double gpa;
public:
    Student();
    Student(long, double);
    Student(const Student&);
    ~Student();
    void print() const;
};

#endif