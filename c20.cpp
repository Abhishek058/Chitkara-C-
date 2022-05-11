#include<iostream>
using namespace std;

class A{
    int x;
    protected:
    int y;
    public:
    int z;
    void setx(){
        cin>>x;
    }
    void dispx(){
        cout<<"X = "<<x<<endl;
    }
};

class B: private A{
    public:
    void set(){
        cout<<"X = ";
        setx();
        cin>>y;
        cin>>z;
    }
    void disp(){
        cout<<"X = ";
        dispx();
        cout<<"Y = "<<y<<endl;
        cout<<"Z = "<<z<<endl;
    }
};
class C: protected A{
    public:
    void set(){
        cout<<"X = ";
        setx();
        cin>>y;
        cin>>z;
    }
    void disp(){
        cout<<"X = ";
        dispx();
        cout<<"Y = "<<y<<endl;
        cout<<"Z = "<<z<<endl;
    }
};
class D: public A{
    public:
    void set(){
        cout<<"X = ";
        setx();
        cin>>y;
        cin>>z;
    }
    void disp(){
        cout<<"X = ";
        dispx();
        cout<<"Y = "<<y<<endl;
        cout<<"Z = "<<z<<endl;
    }
};

int main()
{
    B obj1;
    obj1.x; //error
    obj1.y; //error
    obj1.z; //error
    obj1.set();
    obj1.disp();

    C obj2;
    obj2.x; //error
    obj2.y; //error
    obj2.z; //error
    obj2.set();
    obj2.disp();

    D obj3;
    obj3.x; //error
    obj3.y; //error
    obj3.z; //error
    obj3.set();
    obj3.disp();

    return 0;
}