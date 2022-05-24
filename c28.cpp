#include <iostream>
using namespace std;

template <class T, class U>

class Example
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
    void disp()
    {
        cout << x << "  " << y << endl;
    }
};

int main()
{
    Example<int, float> obj1;
    Example<char, float> obj2;
    Example<float, string> obj3;
    obj1.set();
    obj2.set();
    obj3.set();
    cout << "******************" << endl;
    obj1.disp();
    obj2.disp();
    obj3.disp();
    return 0;
}