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
    friend void max(Integer);
    friend void min(Integer);
    friend float avg(Integer);
};

float mean(Integer obj)
{
    return (obj.a + obj.b) / 2;
}
void max(Integer obj)
{
    if(obj.a > obj.b){
        cout<<obj.a<<endl;
    }
    else{
        cout<<obj.b<<endl;
    }
}
void min(Integer obj)
{
    if(obj.a > obj.b){
        cout<<obj.b<<endl;
    }
    else{
        cout<<obj.a<<endl;
    }
}
float avg(Integer obj)
{
    return (obj.a + obj.b) / 2;
}

int main()
{
    int i, j;
    Integer obj;
    cin>>i>>j;
    obj.setVal(i, j);
    cout<<mean(obj)<<endl;
    max(obj);
    cout<<endl;
    min(obj);
    cout<<endl;
    cout<<mean(obj);
    return 0;
}