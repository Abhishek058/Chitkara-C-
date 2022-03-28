#include <iostream>
using namespace std;

/*calculate Grade of class*/
char Grade(int m)
{
    if (m <= 100 && m >= 80)
    {
        return 'A';
    }
    if (m <= 79 && m >= 70)
    {
        return 'B';
    }
    if (m <= 69 && m >= 60)
    {
        return 'C';
    }
    if (m <= 59 && m >= 50)
    {
        return 'D';
    }
    if (m < 50)
    {
        return 'F';
    }
}

/*calculator*/
int calc(int a, char o, int b)
{
    if (o == '+')
    {
        return a + b;
    }
    if (o == '-')
    {
        return a - b;
    }
    if (o == '/')
    {
        return a / b;
    }
    if (o == '*')
    {
        return a * b;
    }
    if (o == '%')
    {
        return a % b;
    }
}

/*clculate total salary of employee*/
int totalSalary(int bs)
{
    if (bs <= 10000 && bs >= 5000)
    {
        int hra = bs / 20;
        int da = bs / 20;
        return bs + hra + da;
    }
    if (bs > 10000)
    {
        int hra = bs / 10;
        int da = bs / 10;
        return bs + hra + da;
    }
}

int main()
{
    cout << Grade(67) << endl;
    cout << calc(10, '*', 4) << endl;
    cout << totalSalary(72000);
    return 0;
}

