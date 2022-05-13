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

class student{
    int rollno;
    public:
    void setroll(){
        cout<<"Rollno: ";
        cin>>rollno;
    }
    void disproll(){
        cout<<"Roll NO. = "<<rollno<<endl;
    }
};
class test{
    protected:
    int sub1, sub2, sub3;
    public:
    void setmarks(){
        cout<<"Sub1 marks: ";
        cin>>sub1;
        cout<<"Sub2 marks: ";
        cin>>sub2;
        cout<<"Sub3 marks: ";
        cin>>sub3;
    }
    void dispmarks(){        
        cout<<"Sub1 marks: "<<sub1<<endl;
        cout<<"Sub2 marks: "<<sub2<<endl;
        cout<<"Sub3 marks: "<<sub3<<endl;
    }
};

class sports{
    protected:
    int score;
    public:
    void setscore(){
        cout<<"Sports: ";
        cin>>score;
    }
    void dispscore(){
        cout<<"score: "<<score;
    }
};

class result: public student, public test, public sports{
    int avg;
    int total;
    public:
    void dispmarks(){
        avg = (sub1+sub2+sub3+score)/4;
        total = sub1+sub2+sub3+score;
        cout<<"Average Marks: "<<avg<<endl;
        cout<<"Total Marks: "<<total<<endl;

    }
    void set(){
        setroll();
        setmarks();
        setscore();
    }
    void dispdetail(){
        cout<<"***************Details*****************"<<endl;
        disproll();
        dispmarks();
    }
};

int main()
{
    // B obj1;
    // obj1.x; //error
    // obj1.y; //error
    // obj1.z; //error
    // obj1.set();
    // obj1.disp();

    // C obj2;
    // obj2.x; //error
    // obj2.y; //error
    // obj2.z; //error
    // obj2.set();
    // obj2.disp();

    // D obj3;
    // obj3.x; //error
    // obj3.y; //error
    // obj3.z; //error
    // obj3.set();
    // obj3.disp();

    result r1;
    r1.set();
    r1.dispdetail();
    return 0;
}