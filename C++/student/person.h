#ifndef PERSON_H
#define PERSON_H
#include<cassert>
#include<iostream>
#include<iomanip>
using namespace std;

class Person
{
private:
    long identity;
public:
    Person();
    Person(long);
    Person(const Person&);
    ~Person();
    void print() const;
};

#endif