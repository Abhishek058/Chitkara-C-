#include<iostream>
using namespace std;

class Hello{
    public:
    Hello(){
        cout<<"Hello, I am constructor"<<endl;
    }
};

int main()
{
    Hello obj1, obj2;
    return 0;
}