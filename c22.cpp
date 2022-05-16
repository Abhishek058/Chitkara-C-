/***********************POLYMORPHISM*************************/

#include<iostream>
using namespace std;

class Shape{
    public:
    void draw(){
        cout<<"base class draw"<<endl;
    }
};

class Rect: public Shape{
    public:
    void draw(){
        cout<<"Rect class draw"<<endl;
    }
};

class Tri: public Shape{
    public:
    void draw(){
        cout<<"Rect class draw"<<endl;
    }
};

int main()
{
    Shape *s;
    Rect r;
    Tri t;

    // s = &r;
    // s->draw();
    s = &t;
    s->draw();
    return 0;
}