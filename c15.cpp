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

class Time{
    int h, m, s;
    public:
    Time(int hour=0, int min=0, int sec=0){
        h = hour;
        m = min;
        s = sec;
    }

    Time addTime(Time t1){
        Time t3;

        t3.s = t1.s + s;
        t3.m = t1.m + m;
        t3.h = t1.h + h;

        if(t3.s > 60){
            t3.s -= 60;
            t3.m -= 1;
        }
        if(t3.s > 60){
            t3.s -= 60;
            t3.m -= 1;
        }
        if(t3.s > 60){
            t3.s -= 60;
            t3.m -= 1;
        }

        return t3;
    }
    void display(){
        cout<<h<<" : "<<m<<" : "<<s;
    }
};

int main()
{
    Hello obj1, obj2;
    Int obj3, obj4(5);
    
    complex obj5(3, 2), obj6;
    complex obj7;
    obj7 = sumC(obj5, obj6);
    obj7.display();
}