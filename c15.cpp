#include<iostream>
using namespace std;

class Hello{
    public:
    Hello(){
        cout<<"Hello, I am constructor"<<endl;
    }
};

class Int{
    public:
    Int(){
        cout<<"Number not found"<<endl;
    }
    Int(int n){
        cout<<"Number is: "<<n<<endl;
    }
};

class complex{
    int r, j;
    public:
    complex(){
        cout<<0<<endl;
    }
    complex(int r, int j){
        cout<<r<<" + "<<j<<"i"<<endl;
    }
};

int main()
{
    Hello obj1, obj2;
    Int obj3, obj4(5);
    
    complex obj5(3, 2), obj6;
    return 0;
}