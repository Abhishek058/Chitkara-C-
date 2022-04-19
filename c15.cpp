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
        cout<<"Number not added"<<endl;
    }
    Int(int n){
        cout<<"Number is: "<<n<<endl;
    }
};

int main()
{
    Hello obj1, obj2;
    Int obj3, obj4(5);
    return 0;
}