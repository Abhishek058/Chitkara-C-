#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    Distance add(Distance d2)
    {
        Distance d3;

        d3.inches = inches + d2.inches;

        if (d3.inches >= 12)
        {
            d3.inches -= 12;
            d3.feet += 1;
        }
        d3.feet += d3.feet + d2.feet;
        return d3;
    }
};

class Matrix
{
    int mat[3][3];

public:
    void set()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; i < 3; i++)
            {
                cin >> mat[i][j];
            }
        }
    }

    Matrix operator+(Matrix m2)
    {
        Matrix m3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; j < 3; j++)
            {
                m3.mat[i][j] = mat[i][j] + m2.mat[i][j];
            }
        }
        return m3;
    }

    Matrix operator-(Matrix m2)
    {
        Matrix m3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; j < 3; j++)
            {
                m3.mat[i][j] = mat[i][j] - m2.mat[i][j];
            }
        }
        return m3;
    }


};

int main()
{
    // Distance d1(7, 6), d2(5, 6),d3;
    // d3 = d1.add(d2);
    return 0;
}