#include<iostream>
using namespace std;

class Counter{
    int count;
    public:
        void set(){
            count = 0;
        }
        void inc(){
            count++;
        }
        void display() const{
            // count = count + 2;
            cout<<count;
        }
        
};

int main()
{
    Counter c1;
    c1.set();
    c1.inc();
    c1.display();
    return 0;
}