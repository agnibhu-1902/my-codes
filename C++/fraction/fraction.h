#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
    int numer;
    int denom;
    int gcd(int, int) const;
    void normalize();
public:
    //Constructor and destructor
    Fraction(int, int);
    ~Fraction();
    //Accessors
    int getNumer() const;
    int getDenom() const;
    void print() const;
    //Mutators
    void setNumer(int);
    void setDenom(int);
};

#endif