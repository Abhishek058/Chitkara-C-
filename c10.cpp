#include <iostream>
using namespace std;

struct employee
{
    int empId;
    char ename[20];
    int salary;
};

void digit(int n)
{
    int cn = n;
    int digi = 0;
    while (n > 0)
    {
        int x = n%10;
        digi = digi*10+x;
        n = n/10;
    }
    if(digi = cn){
        cout<<"integer is palindrome";
    }
    else{
        cout<<"integer is not palindrome";
    }
}

int main()
{
    // employee e1[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> e1[i].empId;
    //     cin >> e1[i].ename;
    //     cin >> e1[i].salary;
    // }

    // int maxSal = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (e1[i].salary > maxSal)
    //     {
    //         maxSal = e1[i].salary;
    //     }
    // }

    // cout << "maximum slary of employee is " << maxSal;

    digit(2332);
    return 0;
}