#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fraction
{
private:
    int chisl;
    int znamen;
    int NOD(int x, int y)
    {
        if (y == 0) return x;
        return NOD(y, x % y);
    }
public:
    void input(int chisl, int znamen)
    {
        this->chisl = chisl;
        this->znamen = znamen;
    }
    void mult(int x)
    {
        chisl *= x;
        cout << "drob:  " << chisl << '/' << znamen << endl;
    }
    void div(int x)
    {
        znamen *= x;
        cout << "drob:  " << chisl << '/' << znamen << endl;

    }

    void sum(int x)
    {
        chisl += (x * znamen);
        cout << "drob:  " << chisl << '/' << znamen << endl;
    }
    void sub(int x)
    {
        chisl -= (x * znamen);
        cout << "drob:  " << chisl << '/' << znamen << endl;

    }
    void show()
    {
        cout << "tekushaya drob:  " << chisl << '/' << znamen << endl;
    }
    int peredacha()
    {
        return NOD(chisl, znamen);
    }
    void reduct(int x)
    {
        chisl /= x;
        znamen /= x;
    }

};

