#include<iostream>
using namespace std;

class Counter{
    static int count;
    public:
    void inc(){
        count++;
    }
    void display(){
        cout<<count;
    }
};

int Counter::count = 0;

int main()
{
    Counter obj1, obj2, obj3, obj4;
    obj1.inc();
    obj2.inc();
    obj3.inc();
    obj4.inc();
    obj1.display();
    cout<<endl;
    obj2.display();
    cout<<endl;
    obj3.display();
    cout<<endl;
    obj4.display();
    return 0;
}