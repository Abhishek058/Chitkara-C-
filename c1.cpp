#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    if (a >= b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "value of a " << a << endl;
    cout << "value of b " << b << endl;
}

void swap2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "value of a " << a << endl;
    cout << "value of b " << b << endl;
}

void areaPara(int s1, int s2)
{
    cout << "area of rectangle with side " << s1 << " and " << s2 << ": ";
    cout << s1 * s2 << endl;
    cout << "parameter of rectangle with side " << s1 << " and " << s2 << ": ";
    cout << 2 * (s1 + s2) << endl;
}

int interest(int p, int r, int t)
{
    cout << "Simple interest for P: " << p << ", R: " << r << ", T: " << t << " is : ";
    return (p + r + t) / 100;
}

int main()
{
    cout << endl;
    cout << add(45, 54) << endl;

    cout << sub(45, 54) << endl;

    swap1(71, 23);

    swap2(25, 82);

    areaPara(12, 6);

    cout << interest(1800, 7, 3) << endl
         << endl;
}