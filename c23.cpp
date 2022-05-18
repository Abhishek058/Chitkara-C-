#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void set() = 0;
};

class Tri : public Shape
{
    // Triangle is right angle triangle
    int a, b, result;

public:
    void set()
    {
        cout << "set length: ";
        cin >> a >> b;
    }
    void area()
    {
        result = (a * b) / 2;
        cout << "Area of Triangle: " << result;
    }
};

class Sqr : public Shape
{
    int a, result;

public:
    void set()
    {
        cout << "set length: ";
        cin >> a;
    }
    void area()
    {
        result = (a * a);
        cout << "Area of Square: " << result;
    }
};

class Rect : public Shape
{
    int a, b, result;

public:
    void set()
    {
        cout << "set length: ";
        cin >> a >> b;
    }
    void area()
    {
        result = a * b;
        cout << "Area of Reactangle: " << result;
    }
};

int main()
{
    // For Triangle
    Shape *s;
    Tri t;
    s = &t;
    s->set();
    s->area();

    // For Square
    //  Sqr s;
    //  s = &s;
    //  s->set();
    //  s->area();

    // For Rectangle
    //  Rect r;
    //  s = &r;
    //  s->set();
    //  s->area();
    return 0;
}