#include <iostream>
using namespace std;

struct employee
{
    int empId;
    char ename[20];
    int salary;
};

int main()
{
    employee e1[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> e1[i].empId;
        cin >> e1[i].ename;
        cin >> e1[i].salary;
    }

    int maxSal = 0;
    for (int i = 0; i < 5; i++)
    {
        if (e1[i].salary > maxSal)
        {
            maxSal = e1[i].salary;
        }
    }

    cout << "maximum slary of employee is " << maxSal;
    return 0;
}