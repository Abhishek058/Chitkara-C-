#include <iostream>
using namespace std;

class Integer
{
    int a, b;

public:
    void setVal(int x, int y)
    {
        a = x;
        b = y;
    }
    friend float mean(Integer);
};

float mean(Integer obj)
{
    return (obj.a + obj.b) / 2;
}

int main()
{
    int i, j;
    Integer obj;
    cin>>i>>j;
    obj.setVal(i, j);
    cout<<mean(obj);
    return 0;
}