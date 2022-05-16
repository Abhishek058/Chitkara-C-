#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "base class constructor" << endl;
    }
    ~base()
    {
        cout << "base class destructor" << endl;
    }
};

class base1
{
public:
    base1()
    {
        cout << "base1 class constructor" << endl;
    }
    ~base1()
    {
        cout << "base1 class destructor" << endl;
    }
};

class derived: public base, public base1
{
public:
    derived()
    {
        cout << "derived class constructor" << endl;
    }
    ~derived()
    {
        cout << "derived class destructor" << endl;
    }
};

int main()
{
    derived d;
    return 0;
}