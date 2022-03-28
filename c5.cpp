#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int calc()
{

    int a, b;
    char opr;
    cout<<"Enter 1st number: ";
    cin >> a;
    cout<<endl;
    cout<<"Enter operator: ";
    cin >> opr;
    cout<<endl;
    cout<<"Enter 2nd number: ";
    cin >> b;
    cout<<endl;
    if (opr == '+')
    {
        return add(a, b);
    }
    if (opr == '-')
    {
        return sub(a, b);
    }
    if (opr == '*')
    {
        return mult(a, b);
    }
    if (opr == '/')
    {
        return divi(a, b);
    }
}

int main()
{
    cout << calc();
    return 0;
}