#pragma once
#include <iostream>

using namespace std;

class Triad
{
private:
    int date[3];
public:
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    Triad();
    Triad(int day, int month, int year);
    Triad(const Triad& other);

    void Init(int day, int month, int year);
    void Display() const;
    void Read();

    operator string () const;
    friend ostream& operator << (ostream& out, const Triad& m);
    friend istream& operator >> (istream& in, Triad& m);
    friend bool operator>(const Triad& t1, const Triad& t2);
    friend bool operator==(const Triad& t1, const Triad& t2);
    friend bool operator!=(const Triad& t1, const Triad& t2);
    friend bool operator>=(const Triad& t1, const Triad& t2);
    friend bool operator<(const Triad& t1, const Triad& t2);
    friend bool operator<=(const Triad& t1, const Triad& t2);


    ~Triad(void);
};