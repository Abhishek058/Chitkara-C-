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
    // student s1;
    // cin>>s1.name;
    // cin>>s1.rollNo;
    // cin>>s1.marks;

    // cout<<"Name: "<<s1.name<<", Roll No.:"<<s1.rollNo<<", Marks: "<<s1.marks;

    student s2[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s2[i].name;
        cin >> s2[i].rollNo;
        cin >> s2[i].marks;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << s2[i].name << " ";
        cout << s2[i].rollNo << " ";
        cout << s2[i].marks << " ";
        cout << endl;
    }

    int max = s2[0].marks;
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s2[i].marks > max)
        {
            max = s2[i].marks;
            index = i;
        }
    }
    cout<<"maximum marks scored by "<<s2[index].name<<": ";
    cout<<max;
    return 0;
}