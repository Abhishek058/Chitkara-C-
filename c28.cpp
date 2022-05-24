#include <iostream>
using namespace std;

template <class T, class U = float>

// class Example
// {
//     T x;
//     U y;

// public:
//     void set()
//     {
//         cout << "X: ";
//         cin >> x;
//         cout << "Y: ";
//         cin >> y;
//     }
//     void disp()
//     {
//         cout << x << "  " << y << endl;
//     }
// };

class Calculator
{
    T x;
    U y;

public:
    void set()
    {
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
    }

    void sum()
    {
        cout << "Sum: " << x + y << endl;
    }
    void sub()
    {
        cout << "Sub: " << x - y << endl;
    }
    void mul()
    {
        cout << "Mul: " << x * y << endl;
    }
    void div()
    {
        cout << "Div: " << x / y << endl;
    }
};

int main()
{
    // Example<int> obj1;
    // Example<char, float> obj2;
    // Example<float, string> obj3;
    // obj1.set();
    // obj2.set();
    // obj3.set();
    // cout << "******************" << endl;
    // obj1.disp();
    // obj2.disp();
    // obj3.disp();

    Calculator<int> obj1;
    Calculator<int, float> obj2;
    Calculator<float, float> obj3;
    Calculator<int, int> obj4;
    obj1.set();
    obj2.set();
    obj3.set();
    obj4.set();
    cout << "******************" << endl;
    obj1.sum();
    obj2.sum();
    obj3.mul();
    obj4.div();

    return 0;
}