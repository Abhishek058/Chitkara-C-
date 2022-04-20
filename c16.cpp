#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
    }
};

int main()
{

    return 0;
}