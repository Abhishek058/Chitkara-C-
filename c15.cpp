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
    int real, img;
    public:
    complex(){
        real=img=0;
        cout<<0<<endl;
    }
    complex(int r, int j){
        real = r; img = j;
        cout<<r<<" + "<<j<<"i"<<endl;
    }
    friend complex sumC(complex, complex);
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

complex sumC(complex c1, complex c2){
        complex c3;
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
        return c3;
}

int main()
{
    Hello obj1, obj2;
    Int obj3, obj4(5);
    
    complex obj5(3, 2), obj6;
    complex obj7;
    obj7 = sumC(obj5, obj6);
    obj7.display();
}