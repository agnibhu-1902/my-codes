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
    // Constructor and destructor
    Fraction(int, int);
    Fraction(int);
    Fraction(double);
    Fraction();
    ~Fraction();
    // Accessors
    const Fraction operator+() const;
    const Fraction operator-() const;
    int getNumer() const;
    int getDenom() const;
    void print() const;
    // Mutators
    Fraction& operator++();
    Fraction& operator--();
    const Fraction operator++(int);
    const Fraction operator--(int);
    Fraction& operator=(const Fraction&);
    Fraction& operator+=(const Fraction&);
    Fraction& operator-=(const Fraction&);
    Fraction& operator*=(const Fraction&);
    Fraction& operator/=(const Fraction&);
    void setNumer(int);
    void setDenom(int);
    // Friend functions
    friend const Fraction operator+(const Fraction&, const Fraction&);
    friend const Fraction operator-(const Fraction&, const Fraction&);
    friend const Fraction operator*(const Fraction&, const Fraction&);
    friend const Fraction operator/(const Fraction&, const Fraction&);
    // Type conversion operators
    operator double();
    operator int();
};

#endif