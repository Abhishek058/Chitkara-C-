#include<iostream>
using namespace std;

class shape{
    char ch;
    public:
    void select(){
        cin>>ch;
    }
};

class tri: public shape{
    //Triangle is right angle triangle
    int a, b, result;
    public:
    void set(){
        cout<<"set length: ";
        cin>>a>>b;
    }
    void area(){
        result = (a*b)/2;
    }
};

int main()
{
    
    return 0;
}