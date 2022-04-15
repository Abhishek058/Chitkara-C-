#include <iostream>
using namespace std;

class A
{
    int a;

protected:
    int b;

public:
    friend class B;
    void set(int i, int j)
    {
        a = i;
        b = j;
    }
};

class B
{
    int x;

protected:
    int y;

public:
    void display(A obj)
    {
        cout << "a: " << obj.a << " b: " << obj.b;
    }
};

int main()
{
    A obj1; B obj2;
    obj1.set(10, 20);
    obj2.display(obj1);
    return 0;
}