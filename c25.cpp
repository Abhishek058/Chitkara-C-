#include <iostream>
using namespace std;

class Base
{
protected:
    int sub[3], i;

public:
    void accept_details()
    {
        cout << "Physics : ";
        cin >> sub[0];
        cout << "Maths : ";
        cin >> sub[1];
        cout << "Chemistry: ";
        cin >> sub[2];
    }
};

class Percentage: public Base
{
public:
    void show_result()
    {
        cout<<"********************"<<endl;
        cout << "Percentage: " << (sub[0] + sub[1] + sub[2]) / 3;
    }
};
int main()
{
    Percentage p;
    p.accept_details();
    p.show_result();
    return 0;
}