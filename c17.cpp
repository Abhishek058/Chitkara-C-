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
    Complex(int r, int i = 5)
    {
        real = r, imag = i;
    }
};

class Example
{
    int *p;

public:
    Example()
    {
        p = new int;
    }
    void set()
    {
        *p = 10;
    }
    void disp()
    {
        cout << *p << " value stored at " << p;
    }
};

class B;

class A
{
    public:
    int *a;
    friend class B;
    friend void swap(A &a, B &b);
    A(int i = 0)
    {
        a = new int;
        *a = i;
    }
};

class B
{
    int *b;
    public:
    friend void swap(A &a, B &b);
    B(int j = 0)
    {
        b = new int;
        *b = j;
    }
    // void get(A *ob1, B *ob2){
    //     cout << *ob1->a << endl;
    //     cout << *ob2->b << endl;
    // }
};

void swap(A &a, B &b)
{
    int *t = a.a;
    a.a = b.b;
    b.b = t;

    cout<<*a.a<<" "<<*b.b;
}

int main()
{
    // Example e1;
    // e1.set();
    // e1.disp();

    A a1(12);
    B b1(46);
    swap(a1, b1);
    return 0;
}