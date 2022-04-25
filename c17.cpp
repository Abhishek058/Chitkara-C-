#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0, imag = 0;
    }
    Complex(int r, int i=5){
        real = r, imag = i;
    }
    Complex(int r, int i){
        real = r, imag = i;
    }
};

int main()
{

    return 0;
}