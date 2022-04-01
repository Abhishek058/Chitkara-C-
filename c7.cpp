#include <iostream>
using namespace std;

struct student
{
    int rollNo;
    char name[20];
    int marks;
};

int main()
{
    student s1;
    cin>>s1.name;
    cin>>s1.rollNo;
    cin>>s1.marks;

    cout<<"Name: "<<s1.name<<", Roll No.:"<<s1.rollNo<<", Marks: "<<s1.marks;
    return 0;
}