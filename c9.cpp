#include <iostream>
using namespace std;

void print2d(int n, int m, int arr[][3])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transArr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}
int main()
{
    int arr1[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl;

    print2d(3, 3, arr1);
    cout << endl;
    cout<<"After Transpose:"<<endl;
    transArr(arr1);
    cout << endl;
    print2d(3, 3, arr1);
    return 0;
}