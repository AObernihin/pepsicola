#include <iostream>
using namespace std;

class drib
{
public:
    int znamenik;
    int chiselnik;

public:
    void setZnamenik(int _znamenik)
    {
        znamenik = _znamenik;
    }

    void setChiselnik(int _chiselnik)
    {
        chiselnik = _chiselnik;
    }

    drib operator+(const drib other) const
    {
        drib result;
        result.znamenik = this->znamenik * other.znamenik;
        result.chiselnik = this->chiselnik * other.znamenik + other.chiselnik * this->znamenik;
        return result;
    }

    drib operator-(const drib other) const
    {
        drib result;
        result.znamenik = this->znamenik * other.znamenik;
        result.chiselnik = this->chiselnik * other.znamenik - other.chiselnik * this->znamenik;
        return result;
    }

    drib operator*(const drib other) const
    {
        drib result;
        result.znamenik = this->znamenik * other.znamenik;
        result.chiselnik = this->chiselnik * other.chiselnik;
        return result;
    }

    drib operator/(const drib other) const
    {
        drib result;
        result.znamenik = this->znamenik * other.chiselnik;
        result.chiselnik = this->chiselnik * other.znamenik;
        return result;
    }

};

int main()
{



}


