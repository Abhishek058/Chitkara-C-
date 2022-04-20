#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point() {}
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
    }
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    void disp()
    {
        cout << "X: " << x << " Y: " << y << endl;
    }

    ~Point()
    {
        cout << "distructor called";
    }
};

int main()
{
    Point p1;
    p1.set(26, 43);
    p1.disp();
    return 0;
}